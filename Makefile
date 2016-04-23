DEBUG=-g
CC=g++
CFLAGS=-Wall -Werror -std=c++11 -c $(DEBUG)
LFLAGS=-Wall -Werror -std=c++11 $(DEBUG)
OBJ=hStacktest.o hStack.o exc5_6.o

hStacktest: $(OBJ)
	$(CC) $(LFLAGS) -o $@ $(OBJ)

hStacktest.o: hStacktest.cpp hStack.h exc5_6.h
	$(CC) $(CFLAGS) $<

hStack.o: hStack.cpp hStack.h
	$(CC) $(CFLAGS) $<

exc5_6.o: exc5_6.cpp exc5_6.h
	$(CC) $(CFLAGS) $<
