#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef long long ll;

ll sum = 0;
int map[9];

#define QUEUE_NUM  8

bool check(int x,int y)
{
  int ok = true;
  for(int i = 0;i < x;i ++)
  {
     if( map[i] == y ) return false;
     if( x -i == abs( y - map[i] ) ) return false;
  }
  return true;
}
   

void try_nth(int lineno)
{
    if ( lineno == QUEUE_NUM )
    {
        sum ++;
        printf("The %lldth solution:\n[", sum) ;
        for(int i = 0;i < QUEUE_NUM;i ++)
            printf("%d ", map[i]) ;
        printf("]\n");
        return;
    }
    for(int i = 0;i < QUEUE_NUM;i ++)
    {
        if( check(lineno, i) )
        {
            map[lineno] = i;
            try_nth(lineno+1);
            map[lineno] = -1;
        }
    }
}

int main()
{
    try_nth(0);
    printf("%lld\n", sum);
    return 0;
}
