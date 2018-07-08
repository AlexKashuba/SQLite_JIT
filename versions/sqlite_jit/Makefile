include ../../jit.mk

all: $(TMP_DIRS) sqlite sqlite_jit libsqlite.so 

clean:
	rm -f $(BIN_DIR)/sqlite_jit $(BIN_DIR)/sqlite $(JITOBJS) $(VOBJS) 

sqlite: $(GEN_FILES) $(SHAREDOBJS) $(VOBJS) 
	$(CC) $(LDFLAGS) $(SHAREDOBJS) $(VOBJS) $(SYSTEM_LIBS) -o $(BIN_DIR)/$@

sqlite_jit: $(GEN_FILES) $(SHAREDOBJS) $(JITOBJS) 
	$(CC) $(LDFLAGS) $(SHAREDOBJS) $(JITOBJS) $(SYSTEM_LIBS) -o $(BIN_DIR)/$@

