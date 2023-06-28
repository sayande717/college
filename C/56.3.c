#include<stdio.h>
#include<stdlib.h>
main() {
    int p1[2],p2[2],n,pid;
    char buf1[25],buf2[25];
    pipe(p1);
    pipe(p2);
    printf("\nReadfds=%d",p1[0],p2[0]);
    printf("\nWritefds=%d",p1[1],p2[1]);
    pid=fork();
    if(pid == 0) {
        close(p1[0]);
        printf("\nChild process sending data");
        write(p1[1],"Where is HIT?",25);
        close(p2[1]);
        read(p2[0],buf1,25);
        printf("Reply from parent: %s",buf1);
    } else {
        close(p1[1]);
        printf("Parent process receives data");
        n = read(p1[0],buf2,sizeof(buf2));
        printf("\nData received from child through pipe: %s",buf2);
        sleep(3);
        close(p2[0]);
        write(p2[1],"in haldia",25);
        printf("\nReply sent.");
    }
}