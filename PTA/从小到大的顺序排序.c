#include <stdio.h>
#define MAXN 256
int main()
{
	int n , i , j , min , t;
	int a[MAXN] ;
	scanf("%d" , &n) ;
	for(i = 0 ; i < n ; i ++)
		scanf("%d" ,&a[i]) ;
	for(i = 0 ; i < n-1 ;i ++)
	{	min = i ;
		for( j = i ; j< n ;j ++){
			if(a[min] > a[j]) min = j ;
		}
		t=a[i] ;
		a[i]=a[min] ;
		a[min]= t;
	}
	for(i = 0 ; i <n; i ++)
	{
		if(i) printf(" ") ;
		printf("%d",a[i]) ;
	}
	
	return 0 ;
}
