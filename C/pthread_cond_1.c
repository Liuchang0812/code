#include <pthread.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void* Inc(void*);
void* Alert(void*);

#define AlertNum 1000

int mStop = 0;
int mVal = 0;
pthread_mutex_t mMutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t mCond = PTHREAD_COND_INITIALIZER;

int main()
{
    pthread_t mPthread[2];
    pthread_create(&mPthread[0], NULL, &Inc, NULL);
    pthread_create(&mPthread[1], NULL, &Alert, NULL);
    pthread_join(mPthread[0], NULL);
    pthread_join(mPthread[1], NULL);
    pthread_mutex_destroy(&mMutex);
    pthread_cond_destroy(&mCond);
    return 0;
}


void* Inc(void* p)
{
    while (!mStop)
    {
        pthread_mutex_lock(&mMutex);
        printf("%d\n", mVal);
        ++mVal;
        if (mVal > AlertNum)
        {
            pthread_cond_signal(&mCond);
        }
        pthread_mutex_unlock(&mMutex);
    }
}

void* Alert(void* p)
{
    printf("Waiting for ...\n") ;
    pthread_mutex_lock(&mMutex);
    pthread_cond_wait(&mCond, &mMutex);
    printf("yeah! the number is %d\n", mVal);
    mStop = 1;
    pthread_mutex_unlock(&mMutex);
}
