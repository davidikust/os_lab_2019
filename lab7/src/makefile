CC=gcc
CCFLAGS=-I.

all : TCP_client TCP_server UDP_client UDP_server

TCP_client : 
	$(CC) -o TCP_client tcpclient.c $(CFLAGS)

TCP_server : 
	$(CC) -o TCP_server tcpserver.c $(CFLAGS)
	
UDP_client :
	$(CC) -o UDP_client udpclient.c $(CFLAGS)

UDP_server :
	$(CC) -o UDP_server udpserver.c $(CFLAGS)

clean :
	rm -f TCP_client TCP_server UDP_client UDP_server