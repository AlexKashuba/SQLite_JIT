#ifndef TXTBUF_H
#define TXTBUF_H

#include <stddef.h>
#include <stdarg.h>

#define TXT_BUFSIZE 1024
#define DECLR_BUFSIZE 5

typedef struct TxtBuf{
    char *buf;
    size_t size, len;
} TxtBuf;

void *smalloc(size_t size);

TxtBuf *initTxtBuf(size_t size);
void freeTxtBuf(TxtBuf **ppBuf);
void writeToBuf(TxtBuf **ppBuf, const char *fmt, ...);
void appendToBuf(TxtBuf **ppDst, TxtBuf *pSrc);

#endif /* TXTBUF_H */