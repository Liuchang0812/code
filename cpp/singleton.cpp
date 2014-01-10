#include <iostream>
using namespace std;

class Sample{
    public:
    static  Sample getInstance();
    ~Sample();
    private:
        Sample();
};
Sample::Sample()
{
    cout << "Initialed class\n";
}

Sample Sample::getInstance()
{
    static Sample instance;
    return instance;
}
Sample::~Sample()
{
    cout << "deinitialed class\n";
}

int main()
{
    for(int i = 0;i < 5;i ++)
    {
        Sample smp = Sample::getInstance();
    }
}
