#include <stdio.h>
#define MAXN 99
int main() {
	int n ,i=2;
	int fib[MAXN] = {1,1,2} ;
	scanf("%d", &n ) ;
	if(n <= 0 || n > 46) printf("Invalid.") ;
	else {
		for(i=2; i<n; i++)
			fib[i]=fib[i-1]+fib[i-2] ;
		for(i=0; i<n; i++) {
			printf("%11d",fib[i]) ;
			if((i+1) % 5 == 0) printf("\n") ;
		}
	}
	return 0 ;
}
