CC=gcc
CCFLAGS=-I.

all : tcpclient tcpserver udpclient udpserver

tcpclient : 
	$(CC) -o TCP_client tcpclient.c $(CFLAGS)

tcpserver : 
	$(CC) -o TCP_server tcpserver.c $(CFLAGS)
	
udpclient : 
	$(CC) -o UDP_client udpclient.c $(CFLAGS)

udpserver : 
	$(CC) -o UDP_server udpserver.c $(CFLAGS)

clean :
	rm -f tcpclient tcpserver udpclient udpserver