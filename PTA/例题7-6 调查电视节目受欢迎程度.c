#include <stdio.h>
#define MAXN 100
int main() {
	int i,n;
	int a[MAXN],cont[9]={0} ;

	scanf("%d",&n) ;
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]) ;
	}
	for(i=0; i<n; i++) {
		cont[a[i]] ++ ;
	}
	for(i=1; i<=8; i++) {
		printf ("%4d%4d\n",i,cont[i]) ;
	}
}
