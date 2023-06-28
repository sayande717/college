#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<stdio.h>
main() {
    int msgid; // return value from msgget()
    key_t key; // key to be passed to msgget()
    int mykey;
    msgid = msgget((key)|mykey,IPC_CREAT|0);
    /* The leading 0 of an integer indicates that the integer is an octal number and also, the permission of the queue has been set to 666. Now we have the msgid which will be used to send and receive messages from the queue.*/
    printf("Message queue created with key value %d",msgid);
}