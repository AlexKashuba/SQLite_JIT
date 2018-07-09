#define MULTIPLY_TEMPL(pos,next,jp1,jp2,jp3) \
L##pos: \
{\
  pOp = &aOp[pos];\
  char bIntint;\
  u16 flags;\
  u16 type1;\
  u16 type2;\
  i64 iA;\
  i64 iB;\
  double rA;\
  double rB;\
  pIn1 = &aMem[jp1];\
  type1 = numericType(pIn1);\
  pIn2 = &aMem[jp2];\
  type2 = numericType(pIn2);\
  pOut = &aMem[jp3];\
  flags = pIn1->flags | pIn2->flags;\
  if (((type1 & type2) & 0x0004) != 0)\
  {\
    iA = pIn1->u.i;\
    iB = pIn2->u.i;\
    bIntint = 1;\
    switch (90)\
    {\
      case 88:\
        if (sqlite3AddInt64(&iB, iA))\
        goto fp_math##pos;\
\
        break;\
\
      case 89:\
        if (sqlite3SubInt64(&iB, iA))\
        goto fp_math##pos;\
\
        break;\
\
      case 90:\
        if (sqlite3MulInt64(&iB, iA))\
        goto fp_math##pos;\
\
        break;\
\
      case 91:\
      {\
        if (iA == 0)\
          goto arithmetic_result_is_null##pos;\
\
        if ((iA == (-1)) && (iB == (((i64) (-1)) - (0xffffffff | (((i64) 0x7fffffff) << 32)))))\
          goto fp_math##pos;\
\
        iB /= iA;\
        break;\
      }\
\
      default:\
      {\
        if (iA == 0)\
          goto arithmetic_result_is_null##pos;\
\
        if (iA == (-1))\
          iA = 1;\
\
        iB %= iA;\
        break;\
      }\
\
    }\
\
    pOut->u.i = iB;\
    pOut->flags = (pOut->flags & (~(0xc1ff | 0x4000))) | 0x0004;\
  }\
  else\
    if ((flags & 0x0001) != 0)\
  {\
    goto arithmetic_result_is_null##pos;\
  }\
  else\
  {\
    bIntint = 0;\
    fp_math##pos:\
    rA = sqlite3VdbeRealValue(pIn1);\
\
    rB = sqlite3VdbeRealValue(pIn2);\
    switch (90)\
    {\
      case 88:\
        rB += rA;\
        break;\
\
      case 89:\
        rB -= rA;\
        break;\
\
      case 90:\
        rB *= rA;\
        break;\
\
      case 91:\
      {\
        if (rA == ((double) 0))\
          goto arithmetic_result_is_null##pos;\
\
        rB /= rA;\
        break;\
      }\
\
      default:\
      {\
        iA = (i64) rA;\
        iB = (i64) rB;\
        if (iA == 0)\
          goto arithmetic_result_is_null##pos;\
\
        if (iA == (-1))\
          iA = 1;\
\
        rB = (double) (iB % iA);\
        break;\
      }\
\
    }\
\
    if (sqlite3IsNaN(rB))\
    {\
      goto arithmetic_result_is_null##pos;\
    }\
\
    pOut->u.r = rB;\
    pOut->flags = (pOut->flags & (~(0xc1ff | 0x4000))) | 0x0008;\
    if ((((type1 | type2) & 0x0008) == 0) && (!bIntint))\
    {\
      sqlite3VdbeIntegerAffinity(pOut);\
    }\
\
  }\
\
\
  goto L##next;\
  arithmetic_result_is_null##pos:\
  sqlite3VdbeMemSetNull(pOut);\
\
  goto L##next;\
}\
; 

 
#define SUBTRACT_TEMPL(pos,next,jp1,jp2,jp3) \
L##pos: \
{\
  pOp = &aOp[pos];\
  char bIntint;\
  u16 flags;\
  u16 type1;\
  u16 type2;\
  i64 iA;\
  i64 iB;\
  double rA;\
  double rB;\
  pIn1 = &aMem[jp1];\
  type1 = numericType(pIn1);\
  pIn2 = &aMem[jp2];\
  type2 = numericType(pIn2);\
  pOut = &aMem[jp3];\
  flags = pIn1->flags | pIn2->flags;\
  if (((type1 & type2) & 0x0004) != 0)\
  {\
    iA = pIn1->u.i;\
    iB = pIn2->u.i;\
    bIntint = 1;\
    switch (89)\
    {\
      case 88:\
        if (sqlite3AddInt64(&iB, iA))\
        goto fp_math##pos;\
\
        break;\
\
      case 89:\
        if (sqlite3SubInt64(&iB, iA))\
        goto fp_math##pos;\
\
        break;\
\
      case 90:\
        if (sqlite3MulInt64(&iB, iA))\
        goto fp_math##pos;\
\
        break;\
\
      case 91:\
      {\
        if (iA == 0)\
          goto arithmetic_result_is_null##pos;\
\
        if ((iA == (-1)) && (iB == (((i64) (-1)) - (0xffffffff | (((i64) 0x7fffffff) << 32)))))\
          goto fp_math##pos;\
\
        iB /= iA;\
        break;\
      }\
\
      default:\
      {\
        if (iA == 0)\
          goto arithmetic_result_is_null##pos;\
\
        if (iA == (-1))\
          iA = 1;\
\
        iB %= iA;\
        break;\
      }\
\
    }\
\
    pOut->u.i = iB;\
    pOut->flags = (pOut->flags & (~(0xc1ff | 0x4000))) | 0x0004;\
  }\
  else\
    if ((flags & 0x0001) != 0)\
  {\
    goto arithmetic_result_is_null##pos;\
  }\
  else\
  {\
    bIntint = 0;\
    fp_math##pos:\
    rA = sqlite3VdbeRealValue(pIn1);\
\
    rB = sqlite3VdbeRealValue(pIn2);\
    switch (89)\
    {\
      case 88:\
        rB += rA;\
        break;\
\
      case 89:\
        rB -= rA;\
        break;\
\
      case 90:\
        rB *= rA;\
        break;\
\
      case 91:\
      {\
        if (rA == ((double) 0))\
          goto arithmetic_result_is_null##pos;\
\
        rB /= rA;\
        break;\
      }\
\
      default:\
      {\
        iA = (i64) rA;\
        iB = (i64) rB;\
        if (iA == 0)\
          goto arithmetic_result_is_null##pos;\
\
        if (iA == (-1))\
          iA = 1;\
\
        rB = (double) (iB % iA);\
        break;\
      }\
\
    }\
\
    if (sqlite3IsNaN(rB))\
    {\
      goto arithmetic_result_is_null##pos;\
    }\
\
    pOut->u.r = rB;\
    pOut->flags = (pOut->flags & (~(0xc1ff | 0x4000))) | 0x0008;\
    if ((((type1 | type2) & 0x0008) == 0) && (!bIntint))\
    {\
      sqlite3VdbeIntegerAffinity(pOut);\
    }\
\
  }\
\
\
  goto L##next;\
  arithmetic_result_is_null##pos:\
  sqlite3VdbeMemSetNull(pOut);\
\
  goto L##next;\
}\
; 

 
#define DIVIDE_TEMPL(pos,next,jp1,jp2,jp3) \
L##pos: \
{\
  pOp = &aOp[pos];\
  char bIntint;\
  u16 flags;\
  u16 type1;\
  u16 type2;\
  i64 iA;\
  i64 iB;\
  double rA;\
  double rB;\
  pIn1 = &aMem[jp1];\
  type1 = numericType(pIn1);\
  pIn2 = &aMem[jp2];\
  type2 = numericType(pIn2);\
  pOut = &aMem[jp3];\
  flags = pIn1->flags | pIn2->flags;\
  if (((type1 & type2) & 0x0004) != 0)\
  {\
    iA = pIn1->u.i;\
    iB = pIn2->u.i;\
    bIntint = 1;\
    switch (91)\
    {\
      case 88:\
        if (sqlite3AddInt64(&iB, iA))\
        goto fp_math##pos;\
\
        break;\
\
      case 89:\
        if (sqlite3SubInt64(&iB, iA))\
        goto fp_math##pos;\
\
        break;\
\
      case 90:\
        if (sqlite3MulInt64(&iB, iA))\
        goto fp_math##pos;\
\
        break;\
\
      case 91:\
      {\
        if (iA == 0)\
          goto arithmetic_result_is_null##pos;\
\
        if ((iA == (-1)) && (iB == (((i64) (-1)) - (0xffffffff | (((i64) 0x7fffffff) << 32)))))\
          goto fp_math##pos;\
\
        iB /= iA;\
        break;\
      }\
\
      default:\
      {\
        if (iA == 0)\
          goto arithmetic_result_is_null##pos;\
\
        if (iA == (-1))\
          iA = 1;\
\
        iB %= iA;\
        break;\
      }\
\
    }\
\
    pOut->u.i = iB;\
    pOut->flags = (pOut->flags & (~(0xc1ff | 0x4000))) | 0x0004;\
  }\
  else\
    if ((flags & 0x0001) != 0)\
  {\
    goto arithmetic_result_is_null##pos;\
  }\
  else\
  {\
    bIntint = 0;\
    fp_math##pos:\
    rA = sqlite3VdbeRealValue(pIn1);\
\
    rB = sqlite3VdbeRealValue(pIn2);\
    switch (91)\
    {\
      case 88:\
        rB += rA;\
        break;\
\
      case 89:\
        rB -= rA;\
        break;\
\
      case 90:\
        rB *= rA;\
        break;\
\
      case 91:\
      {\
        if (rA == ((double) 0))\
          goto arithmetic_result_is_null##pos;\
\
        rB /= rA;\
        break;\
      }\
\
      default:\
      {\
        iA = (i64) rA;\
        iB = (i64) rB;\
        if (iA == 0)\
          goto arithmetic_result_is_null##pos;\
\
        if (iA == (-1))\
          iA = 1;\
\
        rB = (double) (iB % iA);\
        break;\
      }\
\
    }\
\
    if (sqlite3IsNaN(rB))\
    {\
      goto arithmetic_result_is_null##pos;\
    }\
\
    pOut->u.r = rB;\
    pOut->flags = (pOut->flags & (~(0xc1ff | 0x4000))) | 0x0008;\
    if ((((type1 | type2) & 0x0008) == 0) && (!bIntint))\
    {\
      sqlite3VdbeIntegerAffinity(pOut);\
    }\
\
  }\
\
\
  goto L##next;\
  arithmetic_result_is_null##pos:\
  sqlite3VdbeMemSetNull(pOut);\
\
  goto L##next;\
}\
; 

 
#define INTEGER_TEMPL(pos,next,jp1) \
L##pos: \
{\
  pOp = &aOp[pos];\
  pOut = out2Prerelease(p, pOp);\
  pOut->u.i = jp1;\
  goto L##next;\
}\
; 

 
#define ADD_TEMPL(pos,next,jp1,jp2,jp3) \
L##pos: \
{\
  pOp = &aOp[pos];\
  char bIntint;\
  u16 flags;\
  u16 type1;\
  u16 type2;\
  i64 iA;\
  i64 iB;\
  double rA;\
  double rB;\
  pIn1 = &aMem[jp1];\
  type1 = numericType(pIn1);\
  pIn2 = &aMem[jp2];\
  type2 = numericType(pIn2);\
  pOut = &aMem[jp3];\
  flags = pIn1->flags | pIn2->flags;\
  if (((type1 & type2) & 0x0004) != 0)\
  {\
    iA = pIn1->u.i;\
    iB = pIn2->u.i;\
    bIntint = 1;\
    switch (88)\
    {\
      case 88:\
        if (sqlite3AddInt64(&iB, iA))\
        goto fp_math##pos;\
\
        break;\
\
      case 89:\
        if (sqlite3SubInt64(&iB, iA))\
        goto fp_math##pos;\
\
        break;\
\
      case 90:\
        if (sqlite3MulInt64(&iB, iA))\
        goto fp_math##pos;\
\
        break;\
\
      case 91:\
      {\
        if (iA == 0)\
          goto arithmetic_result_is_null##pos;\
\
        if ((iA == (-1)) && (iB == (((i64) (-1)) - (0xffffffff | (((i64) 0x7fffffff) << 32)))))\
          goto fp_math##pos;\
\
        iB /= iA;\
        break;\
      }\
\
      default:\
      {\
        if (iA == 0)\
          goto arithmetic_result_is_null##pos;\
\
        if (iA == (-1))\
          iA = 1;\
\
        iB %= iA;\
        break;\
      }\
\
    }\
\
    pOut->u.i = iB;\
    pOut->flags = (pOut->flags & (~(0xc1ff | 0x4000))) | 0x0004;\
  }\
  else\
    if ((flags & 0x0001) != 0)\
  {\
    goto arithmetic_result_is_null##pos;\
  }\
  else\
  {\
    bIntint = 0;\
    fp_math##pos:\
    rA = sqlite3VdbeRealValue(pIn1);\
\
    rB = sqlite3VdbeRealValue(pIn2);\
    switch (88)\
    {\
      case 88:\
        rB += rA;\
        break;\
\
      case 89:\
        rB -= rA;\
        break;\
\
      case 90:\
        rB *= rA;\
        break;\
\
      case 91:\
      {\
        if (rA == ((double) 0))\
          goto arithmetic_result_is_null##pos;\
\
        rB /= rA;\
        break;\
      }\
\
      default:\
      {\
        iA = (i64) rA;\
        iB = (i64) rB;\
        if (iA == 0)\
          goto arithmetic_result_is_null##pos;\
\
        if (iA == (-1))\
          iA = 1;\
\
        rB = (double) (iB % iA);\
        break;\
      }\
\
    }\
\
    if (sqlite3IsNaN(rB))\
    {\
      goto arithmetic_result_is_null##pos;\
    }\
\
    pOut->u.r = rB;\
    pOut->flags = (pOut->flags & (~(0xc1ff | 0x4000))) | 0x0008;\
    if ((((type1 | type2) & 0x0008) == 0) && (!bIntint))\
    {\
      sqlite3VdbeIntegerAffinity(pOut);\
    }\
\
  }\
\
\
  goto L##next;\
  arithmetic_result_is_null##pos:\
  sqlite3VdbeMemSetNull(pOut);\
\
  goto L##next;\
}\
; 

 
#define RESULTROW_TEMPL(pos,next,jp1,jp2) \
L##pos: \
{\
  pOp = &aOp[pos];\
  Mem *pMem;\
  int i;\
  if (((db->xProgress != 0) && (nVmStep >= nProgressLimit)) && (db->xProgress(db->pProgressArg) != 0))\
  {\
    rc = 9;\
    return ERROR;\
  }\
\
  if (0 != (rc = sqlite3VdbeCheckFk(p, 0)))\
  {\
    return ERROR;\
  }\
\
  rc = sqlite3VdbeCloseStatement(p, 1);\
  p->cacheCtr = (p->cacheCtr + 2) | 1;\
  pMem = (p->pResultSet = &aMem[jp1]);\
  for (i = 0; i < jp2; i++)\
  {\
    if ((((&pMem[i])->flags & 0x1000) != 0) && sqlite3VdbeMemMakeWriteable(&pMem[i]))\
    {\
      return ERROR;\
    }\
\
    sqlite3VdbeMemNulTerminate(&pMem[i]);\
  }\
\
  if (db->mallocFailed)\
    return ERROR;\
\
  if (db->mTrace & 0x04)\
  {\
    db->xTrace(0x04, db->pTraceArg, p, 0);\
  }\
\
  p->pc = ((int) (pOp - aOp)) + 1;\
  rc = 100;\
  return ROW;\
}\
; 

 
#define COLUMN_TEMPL(pos,next,jp1,jp2,jp3) \
L##pos: \
{\
  pOp = &aOp[pos];\
  int p2;\
  VdbeCursor *pC;\
  BtCursor *pCrsr;\
  u32 *aOffset;\
  int len;\
  int i;\
  Mem *pDest;\
  Mem sMem;\
  const u8 *zData;\
  const u8 *zHdr;\
  const u8 *zEndHdr;\
  u64 offset64;\
  u32 t;\
  Mem *pReg;\
  pC = p->apCsr[jp1];\
  p2 = jp2;\
  pDest = &aMem[jp3];\
  aOffset = pC->aOffset;\
  pCrsr = pC->uc.pCursor;\
  pC->payloadSize = sqlite3BtreePayloadSize(pCrsr);\
  pC->aRow = sqlite3BtreePayloadFetch(pCrsr, &pC->szRow);\
  if (pC->payloadSize > ((u32) db->aLimit[0]))\
  {\
    return 1;\
  }\
\
  pC->iHdrOffset = (u8) (((*pC->aRow) < ((u8) 0x80)) ? ((aOffset[0] = (u32) (*pC->aRow), 1)) : (sqlite3GetVarint32(pC->aRow, (u32 *) (&aOffset[0]))));\
  pC->nHdrParsed = 0;\
  if (pC->szRow < aOffset[0])\
  {\
    return 1;\
  }\
  else\
  {\
    zData = pC->aRow;\
  }\
\
  i = pC->nHdrParsed;\
  offset64 = aOffset[i];\
  zHdr = zData + pC->iHdrOffset;\
  zEndHdr = zData + aOffset[0];\
  do\
  {\
    if ((t = zHdr[0]) < 0x80)\
    {\
      zHdr++;\
      offset64 += sqlite3VdbeOneByteSerialTypeLen(t);\
    }\
    else\
    {\
      zHdr += sqlite3GetVarint32(zHdr, &t);\
      offset64 += sqlite3VdbeSerialTypeLen(t);\
    }\
\
    pC->aType[i++] = t;\
    aOffset[i] = (u32) (offset64 & 0xffffffff);\
  }\
  while ((i <= p2) && (zHdr < zEndHdr));\
  if (((zHdr >= zEndHdr) && ((zHdr > zEndHdr) || (offset64 != pC->payloadSize))) || (offset64 > pC->payloadSize))\
  {\
    return 1;\
  }\
\
  pC->nHdrParsed = i;\
  pC->iHdrOffset = (u32) (zHdr - zData);\
  if (pC->aRow == 0)\
    sqlite3VdbeMemRelease(&sMem);\
\
  if (pC->nHdrParsed <= p2)\
  {\
    return 1;\
  }\
\
  if ((pDest->flags & (((0x2000 | 0x0400) | 0x0020) | 0x0040)) != 0)\
  {\
    return 1;\
  }\
\
  if (pC->szRow >= aOffset[p2 + 1])\
  {\
    zData = pC->aRow + aOffset[p2];\
    if (t == 4)\
    {\
      pDest->u.i = (((16777216 * ((i8) zData[0])) | (zData[1] << 16)) | (zData[2] << 8)) | zData[3];\
      pDest->flags = 0x0004;\
    }\
    else\
    {\
      if (t < 12)\
      {\
        sqlite3VdbeSerialGet(zData, t, pDest);\
      }\
      else\
      {\
        static const u16 aFlag[] = {0x0010, 0x0002 | 0x0200};\
        pDest->n = (len = (t - 12) / 2);\
        pDest->enc = encoding;\
        if (pDest->szMalloc < (len + 2))\
        {\
          pDest->flags = 0x0001;\
          if (sqlite3VdbeMemGrow(pDest, len + 2, 0))\
            return ERROR;\
\
        }\
        else\
        {\
          pDest->z = pDest->zMalloc;\
        }\
\
        memcpy(pDest->z, zData, len);\
        pDest->z[len] = 0;\
        pDest->z[len + 1] = 0;\
        pDest->flags = aFlag[t & 1];\
      }\
\
    }\
\
  }\
  else\
  {\
    pDest->enc = encoding;\
    if ((((pOp->p5 & (0x40 | 0x80)) != 0) && (((t >= 12) && ((t & 1) == 0)) || ((pOp->p5 & 0x80) != 0))) || ((len = sqlite3VdbeSerialTypeLen(t)) == 0))\
    {\
      return 1;\
    }\
    else\
    {\
      rc = sqlite3VdbeMemFromBtree(pC->uc.pCursor, aOffset[p2], len, pDest);\
      if (rc != 0)\
      {\
        return 1;\
      }\
\
      sqlite3VdbeSerialGet((const u8 *) pDest->z, t, pDest);\
      pDest->flags &= ~0x1000;\
    }\
\
  }\
\
  goto L##next;\
}\
; 

 
#define LE_TEMPL(pos,next,jp3,jp1,jp2) \
L##pos: \
{\
  pOp = &aOp[pos];\
  pIn3 = &aMem[jp3];\
  pIn1 = &aMem[jp1];\
  if (!((pIn3->flags & pIn1->flags) & 0x0004))\
  {\
    exit(1);\
  }\
\
  if (pIn3->u.i <= pIn1->u.i)\
  {\
    goto L##jp2;\
  }\
\
  goto L##next;\
}\
; 

 
#define LT_TEMPL(pos,next,jp3,jp1,jp2) \
L##pos: \
{\
  pOp = &aOp[pos];\
  pIn3 = &aMem[jp3];\
  pIn1 = &aMem[jp1];\
  if (!((pIn3->flags & pIn1->flags) & 0x0004))\
  {\
    exit(1);\
  }\
\
  if (pIn3->u.i < pIn1->u.i)\
  {\
    goto L##jp2;\
  }\
\
  goto L##next;\
}\
; 

 
#define GE_TEMPL(pos,next,jp3,jp1,jp2) \
L##pos: \
{\
  pOp = &aOp[pos];\
  pIn3 = &aMem[jp3];\
  pIn1 = &aMem[jp1];\
  if (!((pIn3->flags & pIn1->flags) & 0x0004))\
  {\
    exit(1);\
  }\
\
  if (pIn3->u.i >= pIn1->u.i)\
  {\
    goto L##jp2;\
  }\
\
  goto L##next;\
}\
; 

 
#define GT_TEMPL(pos,next,jp3,jp1,jp2) \
L##pos: \
{\
  pOp = &aOp[pos];\
  pIn3 = &aMem[jp3];\
  pIn1 = &aMem[jp1];\
  if (!((pIn3->flags & pIn1->flags) & 0x0004))\
  {\
    exit(1);\
  }\
\
  if (pIn3->u.i > pIn1->u.i)\
  {\
    goto L##jp2;\
  }\
\
  goto L##next;\
}\
; 

 
#define COPY_TEMPL(pos,next,jp3,jp1,jp2) \
L##pos: \
{\
  pOp = &aOp[pos];\
  int n;\
  n = jp3;\
  pIn1 = &aMem[jp1];\
  pOut = &aMem[jp2];\
  while (1)\
  {\
    sqlite3VdbeMemShallowCopy(pOut, pIn1, 0x1000);\
    if (((pOut->flags & 0x1000) != 0) && sqlite3VdbeMemMakeWriteable(pOut))\
    {\
      return ERROR;\
    }\
\
    if ((n--) == 0)\
      break;\
\
    pOut++;\
    pIn1++;\
  }\
\
  goto L##next;\
}\
; 

 
#define AGGSTEP_TEMPL(pos,next,jp3,jp2) \
L##pos: \
{\
  pOp = &aOp[pos];\
  int i;\
  sqlite3_context *pCtx;\
  Mem *pMem;\
  pCtx = pOp->p4.pCtx;\
  pMem = &aMem[jp3];\
  if (pCtx->pMem != pMem)\
  {\
    pCtx->pMem = pMem;\
    for (i = pCtx->argc - 1; i >= 0; i--)\
      pCtx->argv[i] = &aMem[jp2 + i];\
\
  }\
\
  pMem->n++;\
  pCtx->pFunc->xSFunc(pCtx, pCtx->argc, pCtx->argv);\
  if (pCtx->isError)\
  {\
    if (pCtx->isError > 0)\
    {\
      sqlite3VdbeError(p, "%s", sqlite3_value_text(pCtx->pOut));\
      rc = pCtx->isError;\
    }\
\
    if (pCtx->skipFlag)\
    {\
      i = pOp[-1].p1;\
      if (i)\
        sqlite3VdbeMemSetInt64(&aMem[i], 1);\
\
      pCtx->skipFlag = 0;\
    }\
\
    sqlite3VdbeMemRelease(pCtx->pOut);\
    pCtx->pOut->flags = 0x0001;\
    pCtx->isError = 0;\
    if (rc)\
      return ERROR;\
\
  }\
\
  goto L##next;\
}\
; 

 
#define EQ_TEMPL(pos,next,jp3,jp1,jp2) \
L##pos: \
{\
  pOp = &aOp[pos];\
  pIn3 = &aMem[jp3];\
  pIn1 = &aMem[jp1];\
  if (!((pIn3->flags & pIn1->flags) & 0x0004))\
  {\
    exit(1);\
  }\
\
  if (pIn3->u.i == pIn1->u.i)\
  {\
    goto L##jp2;\
  }\
\
  goto L##next;\
}\
; 

 
#define NE_TEMPL(pos,next,jp3,jp1,jp2) \
L##pos: \
{\
  pOp = &aOp[pos];\
  pIn3 = &aMem[jp3];\
  pIn1 = &aMem[jp1];\
  if (!((pIn3->flags & pIn1->flags) & 0x0004))\
  {\
    exit(1);\
  }\
\
  if (pIn3->u.i != pIn1->u.i)\
  {\
    goto L##jp2;\
  }\
\
  goto L##next;\
}\
; 
