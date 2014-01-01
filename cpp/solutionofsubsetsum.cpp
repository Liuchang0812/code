#include<stdio.h>
#include<stdlib.h>
// find all subset that the sum is target
int dfs(int *arr,int n, int rank, int tmpsum, int target);

int main()
{
    int *arr;
    int n;
    int sum;
    int ans = 0;
    scanf("%d",&n);
    scanf("%d",&sum);

    arr = (int*)malloc(sizeof(int)*n) ;
    for(int i = 0;i < n;i ++)
        scanf("%d",arr+i);

    sum = dfs(arr, n, 0, 0, sum) ;
    printf("%d\n", sum);
    return 0;
}

int dfs(int *arr, int n, int rank, int tmpsum, int target)
{
    if (tmpsum > target) return 0;
    if (tmpsum == target){
        return 1;
    }
    if (rank == n){
        return 0;
    }
    int sola = dfs(arr,n,rank+1,tmpsum,target);
    int solb = dfs(arr,n,rank+1,tmpsum + arr[rank], target);
#ifdef DEBUG
    printf("%d %d\n", sola, solb) ;
#endif
    return sola + solb ;
}
