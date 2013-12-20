#include<iostream>

int main(){

#ifdef DEBUG
    std::cout<<"this is debug info"<<std::endl;
#endif

    std::cout << "this is normal info"<<std::endl;
    return 0;
}
