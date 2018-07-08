#ifndef JIT_COMMONS_H
#define JIT_COMMONS_H

typedef enum {OK, ERROR, NO_MEM, ROW, DEOPT} jitRc;
typedef jitRc (*pJitFunc)(Vdbe*);

#endif /* JIT_COMMONS_H */