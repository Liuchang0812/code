#include<iostream>

int main(){

#ifdef DEBUG
    std::cout<<"this is debug info"<<std::endl;
#endif

    std::cout << "this is normal info"<<std::endl;
    return 0;
}
/*
 * gcc -DDEBUG filename.c
 * ./a.out
 * output:
 *      this is debug info
 *      this is normal info
 * gcc filename.c
 * ./a.out
 * output:
 *      this is normal info
 *
