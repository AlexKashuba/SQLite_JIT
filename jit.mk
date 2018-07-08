JIT_MKFILE_PATH := $(abspath $(lastword $(MAKEFILE_LIST)))
PROJECT_ROOT := $(realpath $(dir $(JIT_MKFILE_PATH)))

include $(PROJECT_ROOT)/vars.mk

ROOT_DIR = $(shell pwd)
VERSION_NAME = $(basename $(notdir $(ROOT_DIR)))
JIT_DIR = $(ROOT_DIR)/jitsrc
LIB_DIR = $(ROOT_DIR)/lib
#use shared objects for all versions
SHAREDOBJ_DIR = $(PROJECT_ROOT)/shared_obj
#use shared objects per version
#SHAREDOBJ_DIR = $(ROOT_DIR)/shared_obj
SHAREDOBJS = $(SRC:$(SRC_DIR)/%.c=$(SHAREDOBJ_DIR)/%.lo)
JITOBJ_DIR = $(ROOT_DIR)/jit_obj
VOBJ_DIR = $(ROOT_DIR)/v_obj
TMP = $(ROOT_DIR)/tmp
GEN_CODE_DIR = $(GEN_DIR)/out/$(VERSION_NAME)
GEN_FILES = $(JIT_DIR)/emit.c $(JIT_DIR)/opcodeTemplates.h

CFLAGS += -I$(JIT_DIR)
TMP_DIRS = $(SHAREDOBJ_DIR) $(JITOBJ_DIR) $(LIB_DIR) $(VOBJ_DIR) $(TMP) $(GEN_CODE_DIR)

JITSRC := $(sort $(shell find $(JIT_DIR) -name '*.c') $(JIT_DIR)/emit.c)
JITOBJS = $(JITSRC:$(JIT_DIR)/%.c=$(JITOBJ_DIR)/%.lo)
VOBJS = $(JITSRC:$(JIT_DIR)/%.c=$(VOBJ_DIR)/%.lo)

OPTS = -O3 

all: 

debug: GEN_FLAGS += -d
debug: OPTS = -DJITDEBUG -g -O0
debug: LDFLAGS += -g
debug: clean all

CFLAGS += $(OPTS)

clean-all:
	$(MAKE) clean
	rm -f $(SHAREDOBJS)
	rm -f $(GEN_FILES)
	rm -f $(TMP)/*
	rm -f $(GEN_CODE_DIR)/*
	rm -f $(LIB_DIR)/*

$(SHAREDOBJ_DIR)/%.lo: $(SRC_DIR)/%.c 
	$(CC) -c $(CFLAGS) $< -o $@

$(JITOBJ_DIR)/%.lo: $(JIT_DIR)/%.c
	$(CC) -c $(CFLAGS) -DJIT -DROOT_DIR=$(ROOT_DIR) $< -o $@

$(VOBJ_DIR)/%.lo: $(JIT_DIR)/%.c 
	$(CC) -c $(CFLAGS) -DNJIT $< -o $@

libsqlite.so: $(SHAREDOBJS) $(JITOBJS)
	$(CC) $(LDFLAGS) $(SHAREDOBJS) $(JITOBJS) $(SYSTEM_LIBS) -shared -o $(LIB_DIR)/$@ 

$(GEN_FILES): $(TMP)/vdbe_prep.c $(GEN_DIR)/cfiles/emitTemplate_prep.c
	python3 $(GEN_DIR)/construct_emit.py -i $< -o $(GEN_CODE_DIR)
	cp $(GEN_CODE_DIR)/* $(JIT_DIR)

$(TMP)/vdbe_prep.c: $(JIT_DIR)/vdbe.c
	$(CC) -E -I$(JIT_DIR) -I$(SRC_DIR) -I$(FAKE_INCLUDES) $< | sed 's/__attribute__((noinline))//g' > $@

$(GEN_DIR)/cfiles/emitTemplate_prep.c: $(GEN_DIR)/cfiles/emitTemplate.c
	$(CC) -E -I$(JIT_DIR) -I$(SRC_DIR) -I$(FAKE_INCLUDES) $< | sed 's/__attribute__((noinline))//g' > $@

$(TMP_DIRS):
	mkdir -p $@

uninstall:
	$(MAKE) clean-all
	rm -rf $(TMP_DIRS)
