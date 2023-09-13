.phony : all clean

CUR_DIR := .

SRC_DIR := $(CUR_DIR)/src
OBJ_DIR := $(CUR_DIR)/obj
INC_DIR := $(CUR_DIR)/inc

LIB_DIR := $(CUR_DIR)/lib
LIB_SHARED_DIR := $(LIB_DIR)/shared

CC :=gcc
C_FLAGS := -c -fPIC -o 

obj:
	$(CC) $(C_FLAGS) $(OBJ_DIR)/main.o $(CUR_DIR)/main.c -I $(INC_DIR)
	$(CC) $(C_FLAGS) $(OBJ_DIR)/hello.o $(SRC_DIR)/hello.c -I $(INC_DIR)

shared:
	$(CC) -shared $(OBJ_DIR)/* -o $(LIB_SHARED_DIR)/libhefo.so
install:
	install $(LIB_SHARED_DIR)/libhefo.so /usr/lib

all: obj shared install
	$(CC)  $(OBJ_DIR)/main.o -L$(LIB_SHARED_DIR) -lhello -o $(BIN_DIR)/hello.o

clean:
	rm -rf $(OBJ_DIR)/*

