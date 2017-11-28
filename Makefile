CC=g++
CFLAGS= -g

all: build clean

build: main.o
	$(CC) -o $(CFLAGS) main.cpp

clean:
	rm -f a.exe
	rm -f a.exe.stackdump
	rm -f *.o
