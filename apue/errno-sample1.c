#include<stdio.h>
#include<stdlib.h>

#include<errno.h>

int main(int argc, char* argv[])
{
	printf("%s\n", strerror(3)) ;
	return 0;
}
