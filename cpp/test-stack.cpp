#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<string>
using namespace std;

int* f()
{
    int tmp[12];
    for (int i = 0;i < 12;i ++)
        tmp[i] = i;

    return tmp;
}

vector<int> testVector()
{
    vector<int> tmp;
    tmp.push_back(1);
    tmp.push_back(2);
    tmp.push_back(3);
    return tmp;
}
string testString()
{
    string tmp;
    tmp = "123";
    return tmp;
}
const char* testCharArr()
{
    return "123";
}

int main()
{
    int* p;
    p = f();
    for (int i = 0;i < 12;i ++)
        printf("%d\n", *p+i);
    vector<int> t_vec = testVector();
    for ( int i = 0;i < t_vec.size();i ++)
        printf("%d\n", t_vec[i]);
    printf("%s\n",testString().c_str());
    printf("%s\n",testCharArr());
    return 0;
}
