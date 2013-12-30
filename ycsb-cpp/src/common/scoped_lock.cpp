#include<pthread.h>
#include<unistd.h>
#include<stdio.h>

template <class Lockable>
class scoped_lock{
    public:
        scoped_lock(Lockable &m):mtx(m){
            pthread_mutex_lock(&mtx);
        }
        ~scoped_lock(){
            pthread_mutex_unlock(&mtx);
        }
    private:
        Lockable &mtx;
};

#ifdef _DEBUG_
int main()
{
    int i = 0;
    pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;
    {
        scoped_lock<pthread_mutex_t> scopedlock(mtx);
        i++;
    }
    printf("%d\n", i);
    return 0;
}
#endif
