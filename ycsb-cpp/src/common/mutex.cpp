#include<pthread.h>
#include<string.h>
#include<stdlib.h>

class mutex{
    public:
        mutex();
        ~mutex();
        void lock();
        void unlock();
        bool trylock();
    private:
        pthread_mutex_t * m_mutex;
};

mutex::mutex()
{
    m_mutex =(pthread_mutex_t*)malloc(sizeof(pthread_mutex_t)) ; 
    if ( m_mutex == NULL)
        throw "create mutex error";
    pthread_mutex_init(m_mutex,NULL);
}

mutex::~mutex()
{
    pthread_mutex_destroy(m_mutex);
    m_mutex = NULL;
}
void mutex::lock()
{
    pthread_mutex_lock(m_mutex);
}

void mutex::unlock()
{
    pthread_mutex_unlock(m_mutex);
}

bool mutex::trylock()
{
    return pthread_mutex_trylock(m_mutex);
}
