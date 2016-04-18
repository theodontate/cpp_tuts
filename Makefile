DEBUG=-g
CC=g++
CFLAGS=-Wall -Werror -std=c++11 -c $(DEBUG)
LFLAGS=-Wall -Werror -std=c++11 $(DEBUG)
OBJ=exc4_2Test.o exc4_2.o

exc4_2Test: $(OBJ)
	$(CC) $(LFLAGS) -o $@ $(OBJ)

exc4_2Test.o: exc4_2Test.cpp exc4_2.h
	$(CC) $(CFLAGS) $<

exc4_2.o: exc4_2.cpp exc4_2.h
	$(CC) $(CFLAGS) $<
