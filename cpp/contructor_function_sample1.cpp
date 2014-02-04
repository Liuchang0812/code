#include <iostream>
using namespace std;
class Base{
public:
	Base(){
		cout << "Contructor function of Base" << endl;
	}	
	~Base(){
		cout << "Decontructor function of Base" << endl;
	}
};

class Concrete : Base{
public:
	Concrete(){
		cout << "Contructor function of Concrete" << endl;
	}
	~Concrete(){
		cout << "Decontructor function of Concrete" << endl;
}
};

int main(int argc, char* argv[])
{
	//Base b;
	Concrete c;
	return 0;
}
