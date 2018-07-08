#ifndef JIT_UTILS_H
#define JIT_UTILS_H
#include <stdlib.h>
#include <stddef.h>
#include <err.h>

void *smalloc(size_t size);

#ifdef JITDEBUG
extern int allocs;
void printAllocs();
#include <stdio.h>
#define sfree(ptr) do{allocs--; free(ptr);}while(0);
#else 
#define sfree(ptr) free(ptr);
#endif

#endif /* JIT_UTILS_H */