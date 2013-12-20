#include <stdio.h>

char *str;

void core_test()
{
    printf("%c\n", *str) ;
}

int main(int argc, char *argv[])
{
    core_test();
    return 0;
}
