#include "emitTemplate.h"
#define HEADER \
"#include \"opcodeTemplates.h\" \n\
#include \"jitted_func.h\" \n\
jitRc jitted_func(Vdbe *p){ \n\
  Op *aOp = p->aOp; \n\
  Op *pOp; \n\
  Mem *aMem = p->aMem;\n\
  Mem *pIn1 = 0;\n\
  Mem *pIn2 = 0;\n\
  Mem *pIn3 = 0;\n\
  Mem *pOut = 0;\n\
  int rc = OK; \n\
  sqlite3 *db = p->db;\n\
  u8 encoding = ENC(db); \n\
  int iCompare = 0;\n\
  unsigned nVmStep = 0;\n\
  unsigned nProgressLimit;\n"


#define FOOTER \
"L%d:\n\
  return 0; \n\
}\n"


#define NXT_TEMPLATE \
"L%d: \n\
{\n\
  VdbeCursor *pC = p->apCsr[%d]; \n\
  rc = ((int (*)(BtCursor *, int))%p)(pC->uc.pCursor, %d); \n\
  pC->cacheStatus = CACHE_STALE; \n\
  if( rc==SQLITE_OK ){ \n\
    pC->nullRow = 0; \n\
    p->aCounter[%d]++; \n\
    goto L%d; \n\
  } \n\
  p->pc = %d + 1; \n\
  return SQLITE_OK; \n\
\n};"

void emitNext(Vdbe *p, Op *pOp, TxtBuf **buf, int pos){
    int jmpPos = pOp->p2;
    writeToBuf(buf, NXT_TEMPLATE, pos, pOp->p1, pOp->p4.xAdvance, pOp->p3, pOp->p5, jmpPos, pos);
}

TxtBuf *emitTxt(Vdbe *p, int start_pos, int end_pos){
    TxtBuf *txt = initTxtBuf(TXT_BUFSIZE);
    TxtBuf *tmp = initTxtBuf(TXT_BUFSIZE);

    int nJittedOps = 0;

    writeToBuf(&txt, "%s", HEADER);

    for(int i = start_pos; i < end_pos+1; i++){
        Op *cOp = &p->aOp[i];
        nJittedOps++;
        switch(cOp->opcode){
            case OP_Next:
                emitNext(p, cOp, &tmp, i);
                break;

            default:
                warnx("%s not implemented.\n", sqlite3OpcodeName(cOp->opcode));
                freeTxtBuf(&txt);
                freeTxtBuf(&tmp);
                return NULL;
        }

        appendToBuf(&txt, tmp);
    }

    writeToBuf(&tmp, FOOTER, end_pos+1);
    appendToBuf(&txt, tmp);
    freeTxtBuf(&tmp);
    fprintf(stderr, "jitted ops: %d, ", nJittedOps);
    return txt;
}



