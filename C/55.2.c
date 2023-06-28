#include<sys/ipc.h>
#include<sys/msg.h>
#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>
int main() {
    //Declare the message queue structure.
    struct msgbht {
        long mtype;
        char mtext[100];
    } recv;

    int gid;
    gid = msgget((key_t)25,IPC_CREAT|0666); // 666 = RW-RW-RW

    // Error: Failed to get IPC Queue.
    if(gid < 0) {
        perror("Message failed");
        exit(1);
    }
    
    // Receiving messages
    for(int i=0;i<4;i++) {
        if(msgrcv(gid,&recv,100,0,0) == -1) {
            printf("Message (%d+1) failed",i);
            exit(1);
        }
        printf("Message %d: %s",i,recv.mtext);
    }
}