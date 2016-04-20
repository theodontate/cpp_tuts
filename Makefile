DEBUG=-g
CC=g++
CFLAGS=-Wall -Werror -std=c++11 -c $(DEBUG)
LFLAGS=-Wall -Werror -std=c++11 $(DEBUG)
OBJ=insult.o intStack.o

insult: $(OBJ)
	$(CC) $(LFLAGS) -o $@ $(OBJ)

insult.o: insult.cpp intStack.h
	$(CC) $(CFLAGS) $<

intStack.o: intStack.cpp intStack.h
	$(CC) $(CFLAGS) $<
