#ifndef JIT_H
#define JIT_H

#include <err.h>
#include <dlfcn.h>
#include "txtBuf.h"
#include "emit.h"
#include "jitUtils.h"
#include "sqliteInt.h" 
#include "vdbeInt.h" 
#include "jitCommons.h"

#define FILE_PREFIX "jitted_func"
#define JITSRC_PATH "/tmp/"FILE_PREFIX".c"

#ifdef JITDEBUG
#define OPTS " -O0 -g -fno-omit-frame-pointer "
#else
#define OPTS " -O2 "
#endif

#define XSTR(X) #X
#define STR(X) XSTR(X)

#define LIB_PATH STR(ROOT_DIR)"/lib/"

#ifdef JITDEBUG
#define DEBUG_PREP "cc -E -P "JITSRC_PATH  INCLUDES" | sed $'s/__NL__/\\\n/g' > /tmp/jit_prep.c && mv /tmp/jit_prep.c /tmp/jitted_func.c && "
#else
#define DEBUG_PREP 
#endif
#define INCLUDES " -Ijitsrc -Isrc "

#define COMPILE_COMAND DEBUG_PREP"cc "JITSRC_PATH OPTS "-o "LIB_PATH FILE_PREFIX".so"INCLUDES"-lsqlite -L"LIB_PATH" -rpath="LIB_PATH" -fPIC -shared"

pJitFunc jitLoop(Vdbe *p, int start_pos, int end_pos);
int isJittable(Op *pOp);

#endif /* JIT_H */
