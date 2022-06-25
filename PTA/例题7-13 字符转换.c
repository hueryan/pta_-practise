#include <stdio.h>
#define MAXN 999
int main()
{
	char str[MAXN] ,ch[MAXN];
	int i ;
	i=0;
	while((str[i]=getchar())!='\n'){
		
		i++ ;
	}
	str[i]='\0' ;
	
	i=0 ;
	while(str[i]!='\0'){
		if(str[i]>'0'&&str[i]<'9'){
			(int)(ch[i]=str[i]-'0') ;
			printf("%d",ch[i]) ;
		}
		i++ ;
	}
}
