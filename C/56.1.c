#include<stdio.h>
#include<stdlib.h>
main() {
    int pipefd[2],n; // File descriptor
    char buff[100];
    pipe(pipefd);
    printf("\nReadfd=%d",pipefd[0]);
    printf("\nWritefd=%d",pipefd[1]);
    write(pipefd[1],"hello, world!",14);
    n = read(pipefd[0],buff,sizeof(buff));
    printf("\nSize of data: %d",n);
    printf("\n Data from data: %s",buff);
}