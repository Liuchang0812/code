#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>

typedef void (*sig_handler)(int) ;

void mysignal(int signo){
    if( signo ==SIGINT)
    {
            fprintf(stderr, "you press ctrl + c\n") ; 
    }
}
int main(){
    signal(SIGINT,mysignal);
    while( true ){
        printf("ok") ;
        sleep(3) ; 
    }
    return 0;
}
