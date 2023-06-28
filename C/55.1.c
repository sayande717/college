#include<sys/ipc.h>
#include<sys/msg.h>
#include<string.h>
#include<stdlib.h>

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

    // Message 1
    strcpy(send.mtext,"I am fine, thank you!");
    send.mtype = 1;
    len = strlen(send.mtext);

    // ERROR: Message not sent.
    if(msgsnd(msg,&send,len,1) == -1) {
        perror("Message failed");
        exit(1);
    }

    // Message 2
    strcpy(send.mtext,"I am fine, thank you!");
    send.mtype = 2;
    len = strlen(send.mtext);

    // ERROR: Message not sent.
    if(msgsnd(msg,&send,len,1) == -1) {
        perror("Message failed");
        exit(1);
    }

    // Message 3
    strcpy(send.mtext,"I am fine, thank you!");
    send.mtype = 3;
    len = strlen(send.mtext);

    // ERROR: Message not sent.
    if(msgsnd(msg,&send,len,1) == -1) {
        perror("Message failed");
        exit(1);
    }

    // Message 4
    strcpy(send.mtext,"I am fine, thank you!");
    send.mtype = 4;
    len = strlen(send.mtext);

    // ERROR: Message not sent.
    if(msgsnd(msg,&send,len,1) == -1) {
        perror("Message failed");
        exit(1);
    }
}