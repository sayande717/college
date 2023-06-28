#include<stdio.h>
#include<stdlib.h>
main() {
    int pipefd[2],n,pid;
    char buff[100];
    pipe(pipefd);
    printf("\nReadfd=%d",pipefd[0]);
    printf("\nWritefd=%d",pipefd[1]);
    pid = fork();
    if(pid == 0) {
        close(pipefd[0]);
        printf("\n Child process sending data");
        write(pipefd[1],"hello, world!",14);
    } else {
        close(pipefd[1]);
        printf("Parent process receives data");
        n = read(pipefd[0],buff,sizeof(buff));
        printf("\nData received from child through pipe: %s",buff);
    }
}