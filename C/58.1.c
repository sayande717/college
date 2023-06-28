/* In this program, we illustrate the use of Berkeley sockers for inter-process communication across the network. We show the communication between a server and a client process.
 * Since many server processes may be running in a system, we identify the desired server processes by a port number. Standard server processes have a worldwide unique port number associated with it.
 * For example, the port number of SMTP is 25. To see a list of server processes and their port numbers, check the file /etc/services (in GNU/Linux).
 */

/* Please read the file Tserver.c before you read this file. To run this, you must first change the IP Address specified in the line: serv_addr.sin_addr = inet_address("192.168.2.221"); to the IP Address of the machine where you are running the server.
 * Compile: cc Tclient.c -i cli
 * Run: ./cli 6000 10.10.2.157 (6000 is argv[1] & 10.10.2.157 is argv[2]).
 * Output: Message from server: I'm ready.
 */

#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<string.h>
#include<stdlib.h>
main(int argc, char *argv[]) {
    int sockfd; // Socket descriptor
    struct sockaddr_in serv_addr; // Structure variable declaration.
    int i;
    char buf[100]; // This buffer will be used for communication.
    // Opening a server is exactly similar to the server process.
    if(sockfd = socket(AF_INET,SOCK_STREAM,0) < 0) {
        printf("Unable to create socket");
        exit(0);
    }
    /* Recall that we specified INADDR_ANY when we specified the server address in the server. Sunce the client can run on a different machine, we must specify the IP Address of the server. 
     * To run this client, you must change the IP Address specified below to the IP Address of the machine where you're running the server. 
     */
    // Below is the protocol definition.
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = inet_addr(argv[2]);
    serv_addr.sin_port = htons(atoi(argv[1]));
    // With the following information provided in serv_addr, the connect() system call estabilishes a connection with the server process.
    if(connect(sockfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr))<0) {
        printf("Unable to connect to server.\n");
        exit(0);
    }
    // After connection, the client can send or receive messages. However, please note that recv() will be blocked when the server is not sensing, and vice versa. For non-blocking mores, refer to online man pages.
    // Receiving information.
    for(i=0;i<100;i++) {
        buf[i] = '\0';
    }
    recv(sockfd,buf,100,0);
    printf("%s\n",buf);
    for(i=0;i<100;i++) {
        buf[i] = '\0';
    }
    strcpy(buf,"Message from the client: Hello! Are you ready?");
    send(sockfd,buf,100,0);
    clost(sockfd);
}