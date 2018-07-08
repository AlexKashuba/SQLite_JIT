VARS_MKFILE_PATH := $(abspath $(lastword $(MAKEFILE_LIST)))
PROJECT_ROOT := $(realpath $(dir $(VARS_MKFILE_PATH)))

GEN_DIR := $(PROJECT_ROOT)/generator
SRC_DIR := $(PROJECT_ROOT)/src
SRC := $(shell find $(SRC_DIR) -name '*.c')
FAKE_INCLUDES := $(PROJECT_ROOT)/utils/fake_libc_include
BIN_DIR = $(PROJECT_ROOT)/bin

CFLAGS = -Wall -fPIC -DHAVE_READLINE -DHAVE_EDITLINE -I$(SRC_DIR) 
LDFLAGS += -fPIC
SYSTEM_LIBS = -ldl -lpthread -lreadline

