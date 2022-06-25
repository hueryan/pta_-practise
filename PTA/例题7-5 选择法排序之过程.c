#include <stdio.h>
#define MAXN 99
int main() {
	int n , i ,j,min;
	int a[MAXN]= {0},t ;
	scanf("%d",&n) ;
	for(i=0; i<n; ++i) {
		scanf("%d",&a[i]) ;
	}
	if(n==1) printf("%d",a[0]) ;
	else {

		for(i=0; i<n-1; i++) {
			min=i ;
			for(j=i+1 ; j<n; j++ ) {

				if(a[min]>a[j]) min=j ;
			}
			t=a[min];
			a[min]=a[i] ;
			a[i]=t;
			for(j=0; j<n; j++) {
				if(j) printf(" ") ;
				printf("%d",a[j]) ;
			}
			//printf("%d",a[n-1]) ;
			printf("\n") ;

		}
	}
}

//if(j) printf(" ") ;
//printf("%d",a[j]) ;
