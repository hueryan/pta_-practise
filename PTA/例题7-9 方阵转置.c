#include <stdio.h>
#define MAXN 10
int main() {
	int n ,i,j;
	int a[MAXN][MAXN],t ;
	scanf("%d",&n) ;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			scanf("%d",&a[i][j]) ;
		}
	}
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if(i>j) {
				t=a[i][j] ;
				a[i][j]=a[j][i];
				a[j][i]=t ;
			}
		}
		//printf("%4d",a[i][j]) ;
	}
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {

			printf("%4d",a[i][j]) ;
		}

		printf("\n");
	}

	return 0;
}
