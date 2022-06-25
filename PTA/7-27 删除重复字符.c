#include <stdio.h>
#define MAXN 256
int main()
{
	int i , cout[MAXN] = {0} ;
	char str[MAXN] ;
	i = 0 ;
	while((str[i] = getchar()) != '\n') i++ ;
	str[i] = '\0' ;
	
	i = 0 ;
	while(str[i] != '\0'){
		if(cout[str[i]]==0) {
//			putchar(str[i]) ;
			cout[str[i]] ++ ;	
		}
		
		
		
		
		
		
		
		
		
		
		
		i ++ ;
	}
	return 0 ;
}
