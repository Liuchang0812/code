#include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<unistd.h>
#include<string.h>
#include<arpa/inet.h>

#define maxline 1024
int
main(int argc,char *argv[])
{
    int sockfd, n;
    char recvline[maxline + 1];
    struct sockaddr_in servaddr;

    if (argc != 2)
    {
        printf("usage: a.out <Ipaddress>");
        return 0;
    }

    if ( (sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        printf("socket error");
        return 0;
    }

    bzero(&servaddr, 0);
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(13);

    if (inet_pton(AF_INET, argv[1], &servaddr.sin_addr) <= 0)
    {
        printf("inet_pton error for %s", argv[1]);
        return 0;
    }
    printf("begin connect...\n");

    if (connect(sockfd, (sockaddr*)&servaddr, sizeof(servaddr)) < 0)
    {
        printf("connect error");
        return 0;
    }
    printf("begin read....\n");
    while ((n =read(sockfd, recvline, maxline)) > 0) {
        recvline[n] = 0;
        if (fputs(recvline, stdout) == EOF)
        {
            printf("fputs error");
            return 0;
        }
    }
    if (n<0)
    {
        printf("read error");
        return 0;
    }
    exit(0);
}
