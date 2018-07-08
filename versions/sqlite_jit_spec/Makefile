include ../../jit.mk

all: $(TMP_DIRS) sqlite_spec sqlite_jit_spec libsqlite.so

clean:
	rm -f $(BIN_DIR)/sqlite_jit_spec $(BIN_DIR)/sqlite_spec $(JITOBJS) $(VOBJS) 

sqlite_spec: $(GEN_FILES) $(SHAREDOBJS) $(VOBJS) 
	$(CC) $(LDFLAGS) $(SHAREDOBJS) $(VOBJS) $(SYSTEM_LIBS) -o $(BIN_DIR)/$@

sqlite_jit_spec: $(GEN_FILES) $(SHAREDOBJS) $(JITOBJS) 
	$(CC) $(LDFLAGS) $(SHAREDOBJS) $(JITOBJS) $(SYSTEM_LIBS) -o $(BIN_DIR)/$@

