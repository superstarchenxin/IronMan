
DEBUG = -g
CXXFLAGS += -Wall -Wextra -pthread
OBJ = link_list.o
BIN = main

all = $(BIN)

$(BIN): $(OBJ) $(BIN).o
	    $(CXX) $(DEBUG) -o $(BIN) $(BIN).o

main.o: main.cpp
link_list.o:       link_list.h
