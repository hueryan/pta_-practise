#include <stdio.h>
#define MAXN 80
int main() {
	int i , flag=1 , k , l , r ;
	int a[MAXN] ;


	i = 0 ;
	while((a[i] = getchar()) != '\n') i++ ;
	a[i] = '\0' ;
	l = 0 ;
	r = i-1 ;
	for(k = 0 ; k < (i+1)/2 ; k++) {
		if(a[l] != a[r]) {
			flag = 0;
			break ;
		}
		l ++;
		r --;
	}
	i = 0 ;
	while(a[i] != '\0'){
		putchar(a[i]) ;
		i ++ ;
	}
	printf("\n") ;
	if(flag == 1) printf("Yes");
	else printf("No") ;
	return 0 ;
}
