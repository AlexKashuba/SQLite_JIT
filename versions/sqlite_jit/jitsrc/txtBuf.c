#include "txtBuf.h"
#include <stdio.h>
#include <string.h>
#include "jitUtils.h"

TxtBuf *initTxtBuf(size_t size){
    TxtBuf *txtBuf = smalloc(sizeof(TxtBuf));
    txtBuf->buf = smalloc(sizeof(*txtBuf->buf)*size);
    txtBuf->size = size;
    txtBuf->len = 0;
    return txtBuf;
}

void freeTxtBuf(TxtBuf **ppBuf){
    sfree((*ppBuf)->buf);
    sfree(*ppBuf);
    *ppBuf = NULL;
}

void writeToBuf(TxtBuf **ppBuf, const char *fmt, ...){
    TxtBuf *pBuf = *ppBuf;
    va_list valist;
    va_start(valist, fmt);
    int str_len = vsnprintf(pBuf->buf, pBuf->size-1, fmt, valist);
    if (str_len >= pBuf->size){
        freeTxtBuf(&pBuf);
        pBuf = initTxtBuf(str_len+1);
        *ppBuf = pBuf;
        va_start(valist, fmt);
        vsnprintf(pBuf->buf, pBuf->size-1, fmt, valist);
    }
    pBuf->len = str_len;
    va_end(valist);
}

void appendToBuf(TxtBuf **ppDst, TxtBuf *pSrc){
    TxtBuf *pDst = *ppDst;
    size_t full_len = pDst->len + pSrc->len;
    if (pDst->size < full_len+1){
        TxtBuf *newDst = initTxtBuf(pDst->size+full_len+1);
        memcpy(newDst->buf, pDst->buf, pDst->len+1);
        freeTxtBuf(&pDst);
        *ppDst = newDst;
        pDst = *ppDst;
    }
    strncat(pDst->buf, pSrc->buf, pSrc->len);
    pDst->len = full_len;
}

