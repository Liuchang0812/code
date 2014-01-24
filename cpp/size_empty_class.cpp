#include <iostream>

class A{
	virtual void say() { ;}
	};

int main()
{
	A a;
	std::cout << sizeof a << std::endl;
	return 0;
}
