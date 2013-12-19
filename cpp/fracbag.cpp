#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main(){
    double v[20];
    int w[20], m[20];
    int n,W;
    scanf("%d%d", &n,&W);
    for(int i =0;i < n;i ++)
    {
        scanf("%d%d", &w[i], &m[i]) ;
        w[i] = m[i] / (double)w[i];
    }
    for(int i = 0;i < n;i ++)
        for(int j = i+1;j < n;j ++)
        {
            if ( w[i] < w[j] ){
                swap(w[i], w[j]) ; 
                swap(m[i], m[j]) ;
                swap(v[i], v[j]) ;
            }
        }
    double x = 0;
    int c = W, i;
    for(i = 0;i < n;i ++)
    {
        if( w[i] <= c )
        {
            x += m[i];
            c -= w[i];
        }
    }
    if( i <= n)
        x += c / w[i] * m[i]; 
    printf("%lf\n", x) ; 
    return 0;
}    

