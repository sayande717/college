#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<sys/types.h>
#define MAXLINE 20
#define SERV_PORT 5777
main(int argc, char *argv) {
    int i,j;
    ssize_t n;
    char line[MAXLINE],revline[MAXLINE];
    int listenfd,connfd,clilen;
    struct sockaddr_in serv_addr,cliaddr;
    listenfd = socket(AF_INET,SOCK_STREAM,0);
    bzero(&serv_addr,sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = ntohs(SERV_PORT);
    bind(listenfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr));
    listen(listenfd,1);
    for(;;) {
        clilen = sizeof(cliaddr);
        connfd = accept(listenfd,(struct sockaddr*)&cliaddr, &clilen);
        printf("Connect to client");
        while(1) {
            if(n == read(connfd,line,MAXLINE) == 0) {
                break;
            }
            line[n-1] = '\0';
            j = 0;
            for(i = n-2;i>=0;i--) {
                revline[j++] = line[i];
            }
            revline[j] = '\0';
            write(connfd,revline,n);
        }
    }
}