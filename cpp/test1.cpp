#include <iostream>
#include <exception>


using namespace std;

class lc{
    public:
        lc();
        ~lc();
        void sayhello();
    private:
        string helloword;
};

lc::lc():helloword("hello world")
{
    cout << "init" << endl;
}
lc::~lc()
{
    cout << "ouit" << endl;
}
void lc::sayhello()
{
    cout << helloword << endl;
}

int main()
{
    lc newlc;
    newlc.sayhello();
    throw 1;
    cout << "exception" << endl;
    return 0;
}
