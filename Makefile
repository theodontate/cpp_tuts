DEBUG=-g
CC=g++
CFLAGS=-Wall -Werror -std=c++11 -c $(DEBUG)
LFLAGS=-Wall -Werror -std=c++11 $(DEBUG)
OBJ=exc5_6.o

exc5_6: $(OBJ)
	$(CC) $(LFLAGS) -o $@ $(OBJ)

exc5_6.o: exc5_6.cpp exc5_6.h
	$(CC) $(CFLAGS) $<

#exc5_3i.o: exc5_3i.cpp exc5_3.h
#	$(CC) $(CFLAGS) $<
