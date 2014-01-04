#include<stdio.h>
#include<stdlib.h>

int* f()
{
    int tmp[12];
    for (int i = 0;i < 12;i ++)
        tmp[i] = i;

    return tmp;
}

int main()
{
    int* p;
    p = f();
    for (int i = 0;i < 12;i ++)
        printf("%d\n", *p+i);
    return 0;
}
