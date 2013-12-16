#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <errno.h>
#include <string.h>

int main(){
	extern int errno;
	errno = 0;
	opendir("/home/kkk");
	printf("%d\n", errno);

	if(errno != 0){
		perror("opendir: ");
	}

	if(errno != 0){
		printf("%s\n", strerror(errno));
	}
	return 0;
}
