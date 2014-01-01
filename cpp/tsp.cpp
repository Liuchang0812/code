#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define INIF 100000
int n;
int ans = INIF;
int visited[105];
int cost[105][105];

void try_next(int pre, int step, int costed);
int min(int, int) ;

int main()
{
    scanf("%d", &n) ; 
    for(int i = 0;i < n;i ++)
        for(int j = 0;j < n;j ++)
        {
            scanf("%d",&cost[i][j]) ;
        }
    memset(visited, 0, sizeof visited) ;
    visited[0] = 1;
    try_next(0,0,0);
    printf("%d\n", ans) ; 
    return 0;
}
void try_next(int pre, int step, int costed)
{
#ifdef DEBUG
    printf("%d %d %d \n", pre, step, costed) ;
#endif
    if (step == n-1){
        ans = min(ans , costed + cost[pre][0]);
        return ;
        }
    for(int i = 1; i!=pre && i < n;i ++)
        if (visited[i] == 0)
        {
           visited[i] = 1;
           try_next(i, step+1, costed + cost[pre][i] ); 
           visited[i] = 0;
        }
}

int min(int a,int b)
{
    return a < b ? a : b;
}
