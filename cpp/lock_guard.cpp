#include <thread>
#include <mutex>
#include <stdio.h>

int g_i = 0;
std::mutex g_i_mutex;

void safe_increment()
{
    std::lock_guard<std::mutex> lock(g_i_mutex);
    ++g_i;
}

int main()
{
    std::thread t1(safe_increment);
    std::thread t2(safe_increment);

    t1.join();
    t2.join();
    printf("%d\n",g_i);
    return 0;
}
