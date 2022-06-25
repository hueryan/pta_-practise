#include <stdio.h>
#define MAXN 99
int main()
{
	int n , x , flag=0 , i = 0;
	int a[MAXN] ;
	scanf("%d%d" , &n ,&x) ;
	for( i=0 ; i < n ; i ++){
		scanf("%d",&a[i]) ;
		if(a[i] == x){
			printf("%d\n",i) ;
			flag = 1 ;
		}
	}	
	if(flag==0) printf("Not Found") ;
		return 0 ;
}
