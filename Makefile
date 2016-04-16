DEBUG=-g
CC=g++
CFLAGS=-Wall -Werror -std=c++11 -c $(DEBUG)
LFLAGS=-Wall -Werror -std=c++11 $(DEBUG)
OBJ=Stack.o

Stack: $(OBJ)
	g++ $(LFLAGS) -o $@ $(OBJ)

Stack.o: Stack.cpp Stack.h
	g++ $(CFLAGS) $<
