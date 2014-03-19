#include <iostream>

using namespace std;

void f(const int& a) 
{
    cout << sizeof(a) << std::endl;
}
int main()
{
    int num = 10;
    f(num);
    return 0;
}
