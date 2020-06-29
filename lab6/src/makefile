CC=gcc
CCFLAGS=-I.

all : client server

client : MultModuloLibrary.o MultModuloLibrary.h
	$(CC) -o client MultModuloLibrary.o client.c -lpthread $(CCFLAGS)

server : MultModuloLibrary.o MultModuloLibrary.h
	$(CC) -o server MultModuloLibrary.o server.c -lpthread $(CCFLAGS)

MultModuloLib.o : MultModuloLib.h
	$(CC) -o MultModuloLibrary.o -c MultModuloLibrary.c $(CCFLAGS)

clean :
	rm MultModuloLibrary.o