#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<time.h>
#include<string.h>

#define MAXLINE 1024

void err_sys(char* msg)
{
    time_t ticks = time(NULL);
    printf("[%s]:\t%s", ctime(&ticks) , msg) ;
    exit(0);
}

