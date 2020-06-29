CC=gcc
CCFLAGS=-I.

all : client server

client : MultModuloLibrary.o MultModuloLibrary.h
	$(CC) -o client MultModuloLibrary.o client.c -lpthread -std=c99 $(CCFLAGS)

server : MultModuloLibrary.o MultModuloLibrary.h
	$(CC) -o server MultModuloLibrary.o server.c -lpthread -std=c99 $(CCFLAGS)

MultModuloLib.o : MultModuloLib.h
	$(CC) -o MultModuloLibrary.o -c MultModuloLibrary.c -std=c99 $(CCFLAGS)

clean :
	rm MultModuloLibrary.o