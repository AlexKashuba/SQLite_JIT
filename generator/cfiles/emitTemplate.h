#ifndef EMIT_H
#define EMIT_H
#include "txtBuf.h"
#include "jit.h"

#include "sqliteInt.h" 
#include "vdbeInt.h" 

TxtBuf *emitTxt(Vdbe *p, int start_pos, int end_pos);

#endif /* EMIT_H */
