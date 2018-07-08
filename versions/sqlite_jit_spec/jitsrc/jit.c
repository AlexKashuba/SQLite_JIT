#include "jit.h"

void writeToFile(TxtBuf *txt){
    FILE* jit_f = fopen(JITSRC_PATH, "w+");
    if (!jit_f)
        err(1, "Couldn't open file for jit");
    if (!fputs(txt->buf, jit_f))
        err(1, "Couldn't write to file for jit");

    fclose(jit_f);
}

void compileFile(){
  #ifdef JITDEBUG
  puts(COMPILE_COMAND);
  #endif

  FILE *compiler = popen(COMPILE_COMAND, "r");
  if (!compiler)
    err(1, "Failed to start compiler for jit ");

  int rc = pclose(compiler);
  if (rc != 0)
    err(1, "Failed to compile jit func");
}

void *dl = NULL;

pJitFunc getJitFunc(){
  if (dl)
    dlclose(dl);
  dl = dlopen(LIB_PATH FILE_PREFIX".so", RTLD_LAZY | RTLD_GLOBAL); 
  if (!dl)
    err(1, "Couldn't open jit func");
  pJitFunc jittedFunc = dlsym(dl, "jitted_func");
  if (!jittedFunc)
    err(1, "Couldn't find symbol for jitted func ");

  return jittedFunc;
}

pJitFunc jitLoop(Vdbe *pVdbe, int start_pos, int end_pos){
    TxtBuf *txt = emitTxt(pVdbe, start_pos, end_pos);
    if(!txt)
        return NULL;
    #ifdef JITDEBUG
    puts(txt->buf);
    #endif
    writeToFile(txt);
    compileFile();
    freeTxtBuf(&txt);
    #ifdef JITDEBUG
    printAllocs();
    #endif
    return getJitFunc();
}
