#include <stdio.h>
#define MAXN 80

int main()
{
	char str[MAXN];
	int i , j ,cout=0,flag=0;
	i=0;
	while((str[i]=getchar()) != '\n') i++;
	str[i]='\0' ;
	i=0;
	while(str[i] != '\0'){
		if(str[i]>='A' && str[i] <= 'Z') putchar(str[i]) ;
		flag=1 ;	
		i++ ;
		
	}
	if(flag==0) printf("Not Found");
	
	return 0 ;
}
