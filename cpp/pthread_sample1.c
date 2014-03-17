#include <pthread.h>
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>

void* doSomething(void* i)
{
    int sleepTime = rand() % 5;
    sleep(sleepTime);
    printf("ID:%d ok, sleep for %d sec\n",*(int*)i, sleepTime) ;
}

int main()
{
    pthread_t thread_ptr[5];
    for (size_t i=0; i < 5; ++i)
    {
        int* id = NULL;
        id = (int*)malloc(sizeof(int));
        *id = i;
        if (pthread_create(&thread_ptr[i], NULL, &doSomething, (void*)id))
        {
            printf("Created thread %d fail!\n", i);
        }
    }
    for (size_t i = 0;i < 5;i ++)
    { 
            pthread_join(thread_ptr[i], NULL);
    }
    return 0;
}
