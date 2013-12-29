#include<string.h>
#include<stdio.h>
#include<time.h>

void
log(char* msg)
{
    time_t ticks;
    ticks = time(NULL);
    printf("%s:\t%s\n", ctime(&ticks), msg) ; 
}

int
main()
{
    log("hello world");
    return 0;
}
