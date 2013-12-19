#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

#define maxn   1005
struct edge{
   int u,v ;
   int w;
   int input(){
      return scanf("%d%d%d",&u,&v,&w) ;
   }
} ;

int setv[maxn];

void makeset(){
    for(int i = 0;i < maxn;i ++)
        setv[i] = i;
}

int find(int x){
    while( setv[x] != x ) x = setv[x] ; 
    return x;
}

void union_set(int a,int b){
    int fa = find(a), fb = find(b) ;
    if( fa == fb ) return;
    else setv[fa] = fb;
}
bool mycmp(struct edge e1,struct edge e2){
    return e1.w <= e2.w;
}

void kruskal(struct edge* e, int n){
    int sum = 0;
    makeset() ;
    sort(e,e+n,mycmp) ;
    for(int i = 0;i < n;i ++)
    {
        if( find(e[i].u) != find(e[i].v) ){
            sum += e[i].w;
            union_set(e[i].u, e[i].v) ;
        }
    }
    printf("%d\n", sum) ;
}
int main(){
    int n;
    struct edge e[10] ;
    scanf("%d", &n) ; 
    for(int i = 0;i < n;i ++)
        e[i].input();
    kruskal(e,n);
    return 0;
}

