#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

//generate a huffman tree
int main(){
    int n;
    scanf("%d",&n) ; 
    int* arr;
    arr = (int*)malloc(sizeof(int) * n) ; 
    for(int i = 0;i < n;i ++)
        scanf("%d", arr + i) ; 
    for(int i = 0;i < n;i ++)
        printf("%d ", arr[i]) ; 
    printf("\n") ; 
    int tot = n;
    while (tot > 1)
    {
        std::sort(arr, arr + tot );
        printf("%d %d -> %d\n", arr[0], arr[1], arr[0] + arr[1]) ; 
        arr[0] = arr[0] + arr[1];
        for(int i = 1;i < tot;i ++)
            arr[i] = arr[i+1] ;
        tot-- ;
    }
    return 0;
}


