#include "sqliteInt.h"
#include "vdbeInt.h"

#define OP_EXEC_JIT 200

#define Deephemeralize_JIT(P) \
   if( ((P)->flags&MEM_Ephem)!=0 \
       && sqlite3VdbeMemMakeWriteable(P) ){ jit_err = NO_MEM;} 

typedef enum {OK, ERROR, NO_MEM, ROW} jit_code;

//#define LE_IMPL ((void) 0)
//#define CPY_IMPL ((void) 0)


//#define LE_IMPL(goto_label) goto_label: le_impl(aMem, aOp, ppOp)

//#define CPY_IMPL(goto_label) goto_label: cpy_impl(aMem, pOp)


#define LE_IMPL(label, jump_false) \
label : ;\
	  pIn1 = &aMem[pOp->p1]; \
	  pIn3 = &aMem[pOp->p3]; \
	  if(pIn3->u.i <= pIn1->u.i){ \
		  pOp = &aOp[pOp->p2 - 1]; \
      goto jump_false; \
	  } \

#define GE_IMPL(label, jump_false) \
label : ;\
    pOp++;\
	  pIn1 = &aMem[pOp->p1]; \
	  pIn3 = &aMem[pOp->p3]; \
    pOp++;\
	  if(pIn3->u.i >= pIn1->u.i){ \
		  pOp = &aOp[pOp->p2 - 1]; \
      goto jump_false; \
	  } \

#define CPY_IMPL(label) \
label : ;\
  pOp++;\
  pIn1 = &aMem[pOp->p1]; \
  pOut = &aMem[pOp->p2]; \
  n = pOp->p3; \
  while( 1 ){ \
    sqlite3VdbeMemShallowCopy(pOut, pIn1, MEM_Ephem); \
    if( (n--)==0 ) break; \
    pOut++; \
    pIn1++; \
  } \

#define NXT_IMPL(label, jump) \
label : ; \
  pOp++;\
  pC = p->apCsr[pOp->p1]; \
  printf("%d", (pC == NULL));\
  rc = pOp->p4.xAdvance(pC->uc.pCursor, pOp->p3); \
  pC->cacheStatus = CACHE_STALE; \
  if( rc==SQLITE_OK ){ \
    pC->nullRow = 0; \
    p->aCounter[pOp->p5]++; \
    pOp = &aOp[pOp->p2 - 1]; \
    goto jump; \
  } \

#define RSLT_IMPL(label) \
label : \
{\
  p->pResultSet = &aMem[pOp->p1]; \
  p->pc = (int)(pOp - aOp) + 1; \
  return ROW; \
} \


/*
void le_impl(Mem *aMem, Op *aOp, Op **ppOp) {
    DEBUG("LE_IMPL_START");
	  Op *pOp = *ppOp;
	  Mem *pIn1 = &aMem[pOp->p1];
	  Mem *pIn3 = &aMem[pOp->p3];
	  assert( (pOp->p5 & SQLITE_AFF_MASK)>=SQLITE_AFF_NUMERIC );
	  if(pIn3->u.i <= pIn1->u.i){
		  pOp = &aOp[pOp->p2 - 1];
	  }

	  *ppOp = pOp;
}

void cpy_impl(Mem *aMem, Op *pOp){
  DEBUG("CPY_IMPL_START");
  Mem *pIn1 = &aMem[pOp->p1];
  Mem *pOut = &aMem[pOp->p2];
  int n;
  n = pOp->p3;
  while( 1 ){
    sqlite3VdbeMemShallowCopy(pOut, pIn1, MEM_Ephem);
    if((pOut->flags&MEM_Ephem) == 0)
      DEBUG("CPY: MEM_Ephem set");
    Deephemeralize_JIT(pOut);
    if( (n--)==0 ) break;
    pOut++;
    pIn1++;
  }
}
*/


  
