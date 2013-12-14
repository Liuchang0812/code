#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<sys/types.h>
#include<unistd.h>

/*
 * 1000 people buy Miphone, but Miphone only have 800...
 */



pthread_mutex_t mutex;
pthread_t buyer[1005];
int sum = 0 ; 
int buy = 0, nobuy = 0;
void* buyphone(){
    pthread_mutex_lock(&mutex) ; 
    if( sum >= 800 )
    {
        printf("I can't buy\n");
        nobuy ++ ; 
        pthread_mutex_unlock(&mutex);
        pthread_exit(NULL);
    }
    sum ++ ; 
    buy ++ ; 
    printf("I buyed one\n") ;
    pthread_mutex_unlock(&mutex) ;
    pthread_exit(NULL);
}
int main(){
    pthread_mutex_init(&mutex,NULL);
    //create pthreades
    void* res;
    for(int i = 0;i < 1000;i ++)
    {
            int res = pthread_create(&buyer[i], NULL, &buyphone, NULL) ;
            if( res ){
                perror("Create error:") ; 
                continue;
            }
            pthread_join(buyer[i], &res) ;
    }
    printf("buyed:%d\tnobuy:%d\n", buy, nobuy) ; 
    pthread_mutex_destroy(&mutex);
    return 0;
}

