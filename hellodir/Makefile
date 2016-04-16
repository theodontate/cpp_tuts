OBJS=hello.o hello2.o
DEBUG=-g
CC=g++
CFLAGS=-Wall -Werror -std=c++11 -c $(DEBUG)
LFLAGS=-Wall -Werror -std=c++11 $(DEBUG)
DEPS=hello.h
OBJ=hello.cpp hello2.cpp

hello: $(OBJS)
	$(CC) $(LFLAGS) $(DEBUG) $(OBJS) -o $@


hello.o: hello.cpp hello2.cpp hello.h
	$(CC) $(CFLAGS) hello.cpp hello2.cpp

hello2.o: hello2.cpp hello.h
	$(CC) $(CFLAGS) hello2.cpp

clean:
	\rm *.o

tar:
	tar cfv hello.tar hello.cpp hello2.cpp hello.h

