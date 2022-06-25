#include <stdio.h>
#define MAXN 80

int main()
{
	int i,l,r ;
	char ch[MAXN] ,t ;
	
	i=0 ;
	while((ch[i]=getchar()) != '\n') i++;
	ch[i]='\0' ;
	
	l=0 ,r=i-1;
	while(l<r){
		t=ch[l] ;
		ch[l] = ch[r] ;
		ch[r] =t ;
		l++,r-- ;
	}
	for(i=0;ch[i]!='\0';i++) putchar(ch[i]) ;
	
	return 0 ;
}
