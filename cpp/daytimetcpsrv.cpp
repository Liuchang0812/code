#include "lc.h"


int 
main(int argc, char* argv[])
{
    int listenfd, connfd;
    struct sockaddr_in servaddr;
    char buff[MAXLINE + 1];
    time_t ticks;
    socklen_t socksize = sizeof(struct sockaddr_in) ;

    listenfd = socket(AF_INET, SOCK_STREAM, 0);

    if(listenfd < 0)
        printf("create socket error\n");

    bzero(&servaddr, 0);
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(13);

    bind(listenfd, (sockaddr*)&servaddr, sizeof(servaddr));

    listen(listenfd, 1) ;

    printf("begin listen...\n") ; 
    while(1){
        connfd = accept(listenfd, (sockaddr*)NULL, NULL);
        ticks = time(NULL);
        snprintf(buff, sizeof(buff), "%.24s\r\n", ctime(&ticks));
        write(connfd, buff, strlen(buff));
        close(connfd);
    }
}
