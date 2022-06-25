#include <stdio.h>
#define MAXN 10

int main()
{
	int n ,i , x,cout = 0;
	int a[MAXN] ;
	scanf("%d %d",&n,&x) ;
	for(i=0 ,cout=0;i<n;i++){
		scanf("%d",&a[i]) ;
		if(a[i]==x){
			printf("%d\n",i);
			cout=1 ;
		}
		if(cout==0)
		printf("Not Found") ;
	}

	return 0 ;
}
