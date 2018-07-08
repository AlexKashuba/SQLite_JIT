include ../../jit.mk

TMP_DIRS = $(VOBJ_DIR)
JITSRC := $(shell find $(JIT_DIR) -name '*.c') 
VOBJS = $(JITSRC:$(JIT_DIR)/%.c=$(VOBJ_DIR)/%.lo)

all: $(TMP_DIRS) sqlite_disp 

clean:
	rm -f $(BIN_DIR)/sqlite_disp $(JITOBJS) $(VOBJS) 

sqlite_disp: $(SHAREDOBJS) $(VOBJS) 
	$(CC) $(LDFLAGS) $(SHAREDOBJS) $(VOBJS) $(SYSTEM_LIBS) -o $(BIN_DIR)/$@
