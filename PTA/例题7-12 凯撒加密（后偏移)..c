#include <stdio.h>
#define MAXN 99
int main()
{
	int n ,i;
	char str[MAXN] ,ch[MAXN];
	i=0 ;
	while((str[i]=getchar())!='\n') i++;
	str[i]='\0' ;
	printf("\n") ;
	scanf("%d",&n) ;
	if(n<0) {
	printf("Invalid.") ;
	return 0 ;
	}else{
		ch[i]=str[i]+'%d',n ;
		putchar(ch[i]) ;
		
	}
	return 0 ;
}
