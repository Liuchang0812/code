#include <stdio.h>

int* testintarray()
{
    int arr[] = {1,2,3};
    return arr;
}

char* testchararray()
{
    char arr[] = {'1','2','3'};
    return arr;
}

const char* testconstchararray()
{
    return "123";
}

int main()
{
    int* ptr_int = testintarray();
    char* ptr_char = testchararray();
    const char* ptr_constchar = testconstchararray();
    for(int i = 0;i < 3;i ++)
        printf("%d ", ptr_int[i]); printf("\n");
    for(int i = 0;i < 3;i ++)
        printf("%c ", ptr_char[i]); printf("\n");
    for(int i = 0;i < 3;i ++)
        printf("%c ", ptr_constchar[i]); printf("\n");
    return 0;
}
