#include <stdio.h>
#define MAXN 256
int main() {
	int n , i , j , min , max , t , k ;
	int a[MAXN] ;
	scanf("%d" , &n) ;
	for(i = 0 ; i < n ; i ++)
		scanf("%d" ,&a[i]) ;
	min=0 ;
	for(i=0; i<n; i++) {

		if(a[i]<a[min]) {
			min = i ;
		}
	}

	t = a[0] ;
	a[0] = a[min];
	a[min] = t;
	max=0 ;
	for(i=0; i<n; i++) {

		if(a[i]>a[max]) {
				max= i;
		}
	}
	t = a [max] ;
	a[max] = a[n-1];
	a[n-1] = t ;
	for(i = 0 ; i <n; i ++) {
//		if(i) printf(" ") ;
		printf("%d ",a[i]) ;
	}

	return 0 ;
}
