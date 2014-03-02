#include <iostream>
#include <string>
using namespace std;
class student
{
public:
student(string s);
int avg();
private:
string name, studentId;
int age,avgpoint[5];
};
int ToInt(string s)
{
		int sum = 0;
		for(size_t i = 0;i < s.size();i ++)
		{
				sum = sum * 10 + s[i] -'0';
		}
		return sum;
}

int student::avg()
{
		return avgpoint[0];
}

student::student(string s)
{
int currentpos = 0;
int nextpos = 0;

// name
nextpos = s.find(",", currentpos);
name = s.substr(0, nextpos);
currentpos = nextpos + 1;	

// age
nextpos = s.find(",", currentpos);
age = ToInt(s.substr(currentpos, nextpos - currentpos ));
currentpos = nextpos + 1;

//studentid
nextpos = s.find(",", currentpos);
studentId = ToInt(s.substr(currentpos, nextpos - currentpos ));
currentpos = nextpos + 1;
//age1 ... age4
int tmpsum = 0;
for (size_t i = 1;i <= 4;i ++)
{
	nextpos = s.find(",", currentpos);
	avgpoint[i] = ToInt(s.substr(currentpos, nextpos - currentpos));
	currentpos = nextpos + 1;
	tmpsum += avgpoint[i];
#ifdef _DEBUG_
	cout << currentpos << " " << nextpos << " " << avgpoint[i] << endl;
#endif
}
avgpoint[0] = tmpsum / 4;
}

int main(int argc, char** argv)
{
		string s;
		cin >> s;
		student st(s);
		cout << st.avg() << endl;
		return 0;
}
