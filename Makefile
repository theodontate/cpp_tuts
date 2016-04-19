DEBUG=-g
CC=g++
CFLAGS=-Wall -Werror -std=c++11 -c $(DEBUG)
LFLAGS=-Wall -Werror -std=c++11 $(DEBUG)
OBJ=Friend.o

Friend: $(OBJ)
	$(CC) $(LFLAGS) -o $@ $(OBJ)

Friend.o: Friend.cpp
	$(CC) $(CFLAGS) $<
