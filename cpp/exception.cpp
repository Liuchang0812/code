#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    try{
        cout << "in try block\n";
        cout << 12 / 1 << endl;
    }
    catch (...) {
        cout << "in catch block\n";
        cout << "catch a exception" << endl;
    }

    cout << " run continue \n";
    return 0;
}
