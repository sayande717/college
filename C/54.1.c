#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main() {
    //Declare the message queue structure.
    struct msgbht {
        long mtype;
        char mtext[100];
    } send, recv;

    int msg,len;
    msg = msgget((key_t)25,IPC_CREAT|0666); // 666 = RW-RW-RW

    // Error: Failed to get IPC Queue.
    if(msg < 0) {
        perror("Message failed");
        exit(1);
    }

    strcpy(send.mtext,"I am fine, thank you!");
    send.mtype = 2;
    len = strlen(send.mtext);
    
    // ERROR: Message not received.
    if(msgrcv(msg,&recv,100,1,0) == -1) {
        perror("Message failed");
        exit(1);
    }

    // ERROR: Message not sent.
    if(msgsnd(msg,&send,len,1) == -1) {
        perror("Message failed");
        exit(1);
    }

    printf("Message from program 1 is: \n%s\n",recv.mtext);
}