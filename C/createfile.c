/*
   create by liuchang
*/
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>

int main(){
	int fd = open("create.tmp", O_WRONLY | O_CREAT | O_TRUNC) ;
	write(fd, "helloworld", sizeof("helloworld")+1) ;
	close(fd) ;
	return 0;
}
