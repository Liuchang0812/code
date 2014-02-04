#include <iostream>
#include <string>
using namespace std;

class A{
	public:
	int sayhello() const{
		val = val + 1;
		return val;
	}
	int val;
};

int main(){
	int b;
	A a;
	a.val = 4;
	b = a.sayhello();
	cout << b << endl;
	return 0;
}
