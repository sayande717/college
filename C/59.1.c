#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<sys/types.h>
#define MAXLINE 20
#define SERV_PORT 5777
main(int argc, char *argv) {
    char sendline[MAXLINE],revline[MAXLINE];
    int sockfd;
    struct sockaddr_in serv_addr;
    sockfd = socket(AF_INET,SOCK_STREAM,0);
    bzero(&serv_addr,sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = ntohs(SERV_PORT);
    connect(sockfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr));
    printf("Enter the data to be sent");
    while(fgets(sendline,MAXLINE,stdin)!=NULL) {
        write(sockfd,sendline,strlen(send));
        printf("\nLine sent");
        read(sockfd,revline,MAXLINE);
        printf("\nReverse of the given sentence is %s",revline);
        printf("\n");
    }
    exit(0);
}