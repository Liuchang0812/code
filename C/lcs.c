#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int max(int a,int b){
		return a>b?a:b;
}
int main(){
		int f[105][105] ; 
		char *stra, *strb ; 

		stra = (char*)malloc(100 * sizeof(char)) ;
		strb = (char*)malloc(100 * sizeof(char)) ;					
		scanf("%s %s", stra, strb) ; 
		int lena, lenb ; 
		lena = strlen(stra) ; 
		lenb = strlen(strb) ;
		printf("%s \t %d\n%s \t %d \n", stra, lena, strb, lenb) ;
		memset(f, 0 ,sizeof f) ; 
		int i,j;
		for(i = 1;i <= lena; i++)
			for(j = 1;j <= lenb;j ++)
			{
				if( stra[i-1] == strb[j-1] ) {
					f[i][j] = f[i-1][j-1] + 1;
				}
				else{
					f[i][j] = max(f[i-1][j] , f[i][j-1]) ;
				}
				//printf("%d %d %d\n", i, j, f[i][j]) ; 
			}
		printf("%d\n", f[lena][lenb] ) ; 
		return 0 ;  
}
