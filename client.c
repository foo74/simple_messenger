#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

#define SERVER_PORT 11011
#define MAX_LINE 256

int main (int argc, char *argv[])
{
   FILE *fp;
   struct hostent *hp;
   struct sockaddr_in sin;
   char *host;
   char buf[MAX_LINE];
   int s;
   int len;
}
