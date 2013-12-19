#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>

using namespace std;

const int maxn = 10006;

int dis[maxn][maxn];
int f[maxn];


int dijkstra(int s, int n)
{
    for(int i = 0;i < n;i ++)
        f[i] = dis[s][i] ;
    int flag[n];
    memset(flag, 0, sizeof flag) ;
    flag[s] = 1;
    for(int i = 0;i < n-1;i ++)
    {
        int minn = dis[s][i] ;
        int id = i;
        for(int j = 0;j < n;j ++)
            if( flag[j] == 0 && dis[s][j] < minn ){
                minn = dis[s][j];
                id = j;
            }
        flag[id] = 1;
        for(int j = 1;j <= n;j ++)
            if(f[id] + dis[id][j] < f[j] && !flag[j])
                    f[j] = f[id] + dis[id][j];
                    
    }
    for(int i = 0;i < n;i ++)
        printf("%d -> %d : %d\n", s, i, f[i]) ; 
}
int main()
{
    int n ; 
    cin >> n; 
    for(int i = 0; i < n;i ++)
        for(int j = 0;j < n;j ++)
            cin >> dis[i][j] ;
    dijkstra(0, n) ;
    return 0;
}

