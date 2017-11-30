CC=g++
CFLAGS= -g
LIBSRC = main.o
OSMLIB = complexACP.a



all: build clean

build: main.o
	$(CC) -o $(CFLAGS) main.cpp
	ar rcs $ (OSMLIB) $(LIBSRC)

clean:
	rm -f a.exe
	rm -f a.exe.stackdump
	rm -f *.o
