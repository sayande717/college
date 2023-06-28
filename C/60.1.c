/* The Receiver process.
 * Compile: $ cc StopWaitReceiver.c -o rec
 * Execute: ./rec 10.10.2.157 (IP Address of the server)
 * Enter port number: 5577
 */

#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
#include<string.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
main(int argc,char *argv[]) {
    int sockfd; // Socket descriptor.
    struct sockaddr_in serv_addr;
    int i;
    long int p;
    char buf[5];
    printf("Enter the port address");
    scanf("%d",&p);
    if(sockfd = socket(AF_INET,SOCK_STREAM,0)<0) {
        printf("Error creating socket! \n");
        exit(0);
    }
    // Below is the protocol definition.
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = inet_addr(argv[1]);
    serv_addr.sin_port = htons(p);
    if(connect(sockfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr))<0) {
        printf("Unable to connect to server");
        exit(0);
    }
    while(1) {
        // Receiving information
        for(i=0;i<5;i++) {
            buf[i] = '\0';
        }
        recv(sockfd,buf,5,0);
        printf("FRAME: %s\n",buf);
        if(buf[0] == '0') {
            buf[0] = '1';
        } else {
            buf[0] = '0';
        }
        send(sockfd,buf,5,0);
    }
    close(sockfd);
}