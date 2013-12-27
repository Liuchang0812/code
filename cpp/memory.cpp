#include <tr1/memory>
#include <iostream>

using namespace std;
using namespace std::tr1;

typedef shared_ptr<int> ptr_int;

int main()
{
    ptr_int inta(new int);
    *inta = 5;
    cout << *inta << "@ "<< inta << endl;
    return 0;
}

