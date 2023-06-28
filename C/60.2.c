/* The Sender process.
 * Compile: $ cc StopWaitSender.c -o sen
 * Execute: ./sen 10.10.2.157 (Machine's IP Address)
 * Enter port number: 5577
 */

#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
#include<string.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
main() {
    int sockfd,newsockfd; // Socket descriptors.
    int clilen;
    struct sockaddr_in cli_addr,serv_addr;
    int i,j = 0;
    long int p;
    char buf[5],f = '0'; // We will use this buffer for communication.
    printf("Enter the port address");
    scanf("%ld",&p);
    if(sockfd = socket(AF_INET,SOCK_STREAM,0)<0) {
        printf("Error creation in socket!");
        exit(0);
    }
    // Protocol definition.
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(p);
    // With the following information provided in serv_addr, we associate the server with it's port using the bind() system call.
    if(bind(sockfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr) < 0)) {
        printf("Error in binding. \n");
        exit(0);
    }
    // Below statement specifies that upto 5 concurrent client requests will be queued up while the system is executing the 'accept' system call below.
    listen(sockfd,5);
    clilen = (sizeof(cli_addr));
    newsockfd = accept(sockfd,(struct sockaddr *)&cli_addr,&clilen);
    if(newsockfd < 0) {
        printf("Accept error \n");
        exit(0);
    }
    while(1) { // Chat server
    // Sending information
    for(i=0;i<5;i++) {
        buf[i] = '\0';
    }
    recv(newsockfd,buf,5,0);
    printf("ACK: %s\n",buf);
    if(f == '0') {
        f=1;
    } else {
        f = '0';
    }
    // Closing client socket.
    close(newsockfd);
    close(sockfd);
    }
}
