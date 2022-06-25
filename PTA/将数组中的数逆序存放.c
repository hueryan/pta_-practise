#include <stdio.h>
#define MAXN 10
int main() {
	int l,r,i,n,temp;
	int a[MAXN] ;

	scanf("%d",&n) ;
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]) ;
	}
	for(i=0,l=0,r=n-1;i<n;i++){
		if(l<r){
			temp=a[l] ;
			a[l] = a [r] ;
			a[r] = temp ;
			
		}
		l++ , r-- ;
	}
	for(i=0;i<n-1;i++){
		printf("%d ",a[i]) ;
	}
	printf("%d",a[n-1]) ;
	return 0 ;
}


