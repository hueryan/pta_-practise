#include <stdio.h>
#define MAXN 90
int main() {
	char a[MAXN];
	int i ,r,l,flag=0;
	i = 0 ;
	while((a[i]=getchar())!='\n') {
		i ++ ;
	}
	a[i]='\0' ;

	l=0,r=i-1 ;
	i=0;
	while(a[i]!='\0') {
		if(l<r) {

			if(a[l]==a[r])
				r--,l++,flag=0;
			else {
				flag=-1;
				break;
			}
		}
		i++;
	}
	i=0;
	while(a[i]!='\0') {

		putchar(a[i]) ;
		i++ ;
	}
	if(flag==-1)	printf("\nNo") ;
	else printf("\nYes") ;
	return 0 ;


}
