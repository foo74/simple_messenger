all: client server

client: client.c
	gcc client.c -Wall -g -o client
server: server.c
	gcc server.c -Wall -g -o server
run:
	./client
run-client:
	./client
run-server:
	./server
clean:
	rm client server
