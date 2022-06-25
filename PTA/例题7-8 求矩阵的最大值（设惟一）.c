#include <stdio.h>
#define MAXN 6
int main() {
	int m  ,n ,r,c,l,ri,q=-99;
	int a[MAXN][MAXN] ;
	scanf("%d %d",&m,&n) ;
	for(r=0; r<m; r++) {
		for(c=0; c<n; c++) {
			scanf("%d",&a[r][c]) ;
		}
	}
	for(r=0; r<m; r++) {
		for(c=0; c<n; c++) {
			if(q<a[r][c])
				l=r,ri=c,q=a[r][c];
		}
	}
	printf("%d\n",a[l][ri]) ;
	printf("%d %d",l,ri) ;
}
