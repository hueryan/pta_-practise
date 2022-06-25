#include <stdio.h>
#define MAXN 99
int main() {
	int i , j , n , t , max;
	int a[MAXN] ;
	scanf("%d" , &n ) ;
	for(i = 0 ; i < n ; i ++ ) scanf("%d", &a[i]) ;
	for(i = 0 ; i < n-1 ; i ++) {
		max = i ;
		for(j = i + 1 ; j < n ; j ++) {
			if(a[max] < a [j]) {
				max = j ;
			}
		}t = a[i] ;
		a[i] = a[max]  ;
		a[max] = t ;
		
	}
	for(i = 0 ; i < n ; i ++ ) {

		if(i) printf(" ") ;
		printf("%d" , a[i]) ;
	}
	return 0 ;
}
