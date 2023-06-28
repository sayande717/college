#include<stdio.h>
#include<ctype.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fentl.h>
#include<stdlib.h>
#include<string.h>
main() {
    int wrfd,rdfd,n,d,ret_val,count,count1,i=0;
    char buf[50],buf1[50],kp[2],kp1[2];
    ret_val = mkfifo("np1",0666);
    ret_val = mkfifo("np2",0666);
    rdfd = open("np1",0_RDONLY);
    wrfd = open("np2",0_WRONLY);
    n = read(rdfd,buf,50);
    buf[n] = '\0';
    printf("Full dusplex server: read from the pipe: %s\n",buf);
    count = 0;
    count1 = 0;
    for(i=0;i<n;i++) {
        if(buf1[i]=='a' || buf1[i]=='e' || buf1[i]=='i' || buf1[i]=='o' || buf1[i]=='u' || buf1[i]=='A' || buf1[i]=='E' || buf1[i]=='I' || buf1[i]=='O' || buf1[i]=='U') {
            count++;
        } else if((buf[i]>64 && buf[i]<91) || (buf[i]>96 && buf[i]<123)) {
            count1++;
        }
        strcat(buf1,"No. of vowels: ");
        kp[0] = (char)(count+48);
        kp[1] = '\0';
        strcat(buf1,kp);
        kp1[0] = (char)(count+48);
        kp1[1] = '\0';
        strcat(buf1,"No. of consonants: ");
        strcat(buf1,kp1);
        write(wrfd,buf1,strlen(buf1));
    }
}