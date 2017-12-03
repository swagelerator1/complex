CC=g++
CFLAGS= -g
LIBSRC = complexno.cpp
OSMLIB = complexno.a

all: build clean

build: main.o
	$(CC) -c $(LIBSRC)
	ar rvs $(OSMLIB) complexno.o

clean:
	rm -f *.o
	rm -f *.a
