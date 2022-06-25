#include <stdio.h>
#define MAXN 80

int main()
{
	int n ,x ;
	int i , j=-1 ;
	int a[20] ;
	scanf("%d %d",&n,&x);
	for(i=0;i<n;i ++){
		scanf("%d ",&a[i]) ;
		if(a[i]==x){
			j=i ;
		}
	}
	if(j!=-1) printf("%d",j) ;
	else printf("Not Found") ;
	return 0 ;
}
