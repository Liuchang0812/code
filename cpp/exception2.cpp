#include <iostream>
#include <exception>

using namespace std;

int main () {
    try
    {
        int* myarray= new int[1000];
    }
    catch (exception& e)
    {
        cout << "Stardard exception: " << e.what() << endl;
    }
    return 0;
}
