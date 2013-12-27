#include <iostream>
#include <thread>

void foo()
{
    std::cout << " do foo function" << std::endl;
}

void bar()
{
    std::cout << " do bar function" << std::endl;
}

int main()
{
    std::thread first(foo);
    std::thread second(bar);

    std::cout << "main, foo and bar now execute concurrently...\n";

    first.join();
    second.join();

    std::cout << "foo and bar compeleted.\n";

    return 0;
}
