#include <iostream>
#include <cstdlib>
#include <map>
#include <cmath>

using namespace std;

double zeta(int n, double theta)
{
    double sum = 0;
    for (long i = 0;i < n;i ++)
    {
        sum += 1.0/(pow(i+1,theta)) ;
    }
    return sum;
}

long zipf(long n, double theta)
{
    double alpha = 1 / (1-theta);
    double zetan = zeta(n, theta);
    double eta = (1 - pow(2.0/n, 1-theta)) / (1-zeta(theta, 2) / zetan) ;
    double u = static_cast<double>(rand()) / RAND_MAX;
    double uz = u * zetan;
    if (uz < 1) return 1;
    if (uz < 1 + pow(0.5, theta)) return 2;
    return 1 + (int)(n * pow(eta*u - eta + 1, alpha));
}

int main(int argc, char** argv)
{
    map<long, long> Nums;
    for (int i = 0;i < 100000;i ++)
    {
        long value = zipf(100, 0.8);
        cout << value << endl;
        Nums[value] ++;
    }
    for(map<long, long>::iterator p = Nums.begin(); p!= Nums.end(); p++)
    {
        //cout << p->first <<","<< p->second / 10000.0 <<endl;
    }
    return 0;
}
