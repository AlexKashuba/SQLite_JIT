#include "jitUtils.h"

#ifdef JITDEBUG
int allocs = 0;
void printAllocs(){
    printf("Outstanding smallocs: %d\n", allocs);
}
#endif

void *smalloc(size_t size){
    void *buf = malloc(size);
    if (!buf)
        err(1, "No memory");
    
    #ifdef JITDEBUG
    allocs++;
    #endif

    return buf;
}