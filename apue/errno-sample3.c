#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(){
	for(int i = 0; i < 140;i ++){
		printf("%4d:%s\n",i,strerror(i));
	}
	return 0;
}
