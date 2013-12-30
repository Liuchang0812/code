#include<boost/thread.hpp>
#include<iostream>

void sayhello()
{
    for(int i = 0;i < 100;i ++)
        std::cout << "hello" << std::endl;
}
void sayworld()
{
    for(int i = 0;i < 100;i ++)
        std::cout << "world" << std::endl;
}
int
main()
{
    boost::thread t1(&sayhello);
    boost::thread t2(&sayworld);
    t1.join();
    t2.join();
    return 0;
}

