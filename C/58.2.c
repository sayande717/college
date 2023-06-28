// SERVER PROCESS
/* Compile: cc Tserver.c -o ser
 * Run: ./ser 6000 10.10.2.157
 * Output: Message from the client: Hello, are you ready?
 */

#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
#include<string.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#define serv_port 6000
main(int argc,char *argv[]) {
    int sockfd,newsockfd; // Socket descriptors.
    int clilen;
    struct sockaddr_in cli_addr, serv_addr; // Structure variable declaration.
    int i;
    char buf[100]; // We will use this buffer for communication.
    /* The following system call opens a socket. 
     * The 1st parameter indicates the family of the protocol to be followed. For internet protocols we use AF_INET.
     * For TCP sockets, the 2nd parameter is SOCK_STREAM.
     * The 3rd parameter is set to 0 for user applications.
     */
    if(sockfd = socket(AF_INET,SOCK_STREAM,0)<0) {
        printf("Cannot create socket");
        exit(0);
    }
    /* The structure "sockaddr_in" is defined in <netinet/in.h> for the internet family of protocols.This has 3 main fields.
     * The field "sin_family" specifies the family and therefore AF_INET for the internet family.
     * The field "sin_addr" specifies the internet address of the server. This field is set to INADDR_ANY for machines having a single IP Address.
     * The field "sin_port" specifies the port number of the server.
     */
    // Below is the protocol definition.
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(atoi(argv[1]));
    // With the following information provided in serv_addr, we associate the server with it's port using the bind() system call.
    if(bind(sockfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr))<0) {
        printf("Unable to bind local address");
        exit(0);
    }
    // Below statement specifies that upto 5 concurrent client requests will be queued up while the system is executing the "accept" system call below.
    listen(sockfd,5);
    // Here, we are illustrating a concurrent server - one that forks to accept multiple client connections. As soon as the server accepts a connection from a client, it forks a child which communicates with the client, while the parent becomes free to accept a new connection. To facilitate this, the accept system call returns a new socket descriptor which can be used by the child. The parent continues with the original socket descriptor.
    while(1) { // Chat server
        // The accept system call fills up the clients' details in a struct sock_addr, which is passed as a parameter. The length of the structure is noted in clilen. Note that the new socket descriptor returned by the accept() system call is stored in "newsockfd"
        // START: Accepting client.
        clilen = sizeof(cli_addr);
        newsockfd = accept(sockfd,(struct sockaddr*)&cli_addr,&clilen);
        if(newsockfd<0) {
            printf("Accept error. \n");
            exit(0);
        }
        // END: Accepting client.
        // Having succesfully accepted a client connection, the server now forks. The parent closes the new socket descriptor and loops back to accept the new connection.
        if(fork()==0) {
            // The child process will now communicate with the client through the send() and recv() system calls.
            close(sockfd); // The old socket is closed, since all communication will be done over the new socket.
            // We initialize the buffer, copy the message to it, and send the message to the client.
            for(i=1;i<100;i++) {
                buf[i] = '\0';
            }
            strcpy(buf,"Message from server: Yes, I am ready.");
            send(newsockfd,buf,100,0);
            // We again initialize the buffer, and receive a message from the client.
            for(i=1;i<100;i++) {
                buf[i] = '\0';
            }
            recv(newsockfd,buf,100,0);
            close(newsockfd); // Closing client socket.
            exit(0);        
        }
        close(newsockfd);
    }
}