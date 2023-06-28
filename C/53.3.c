#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<stdio.h>
#include<stdlib.h>
int main() {
    int msgid; // Specified or received msg queue ID.
    key_t key;
    msgid = msgget((key),IPC_CREAT|IPC_EXCL);
    if(msgid < 0) {
        perror("Message failed");
        exit(1);
    } else {
        printf("Message queue created wtih key value %d",msgid);
    }
}