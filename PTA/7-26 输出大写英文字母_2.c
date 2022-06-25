#include <stdio.h>
#define MAXN 999

int main() {
	char str[MAXN];
	int i , j ,cout[MAXN]= {0},flag=0;

	i=0;
	while((str[i]=getchar()) != '\n') i++;
	str[i]='\0' ;
	i=0;
	while(str[i] != '\0') {
		if(str[i]>='A' && str[i] <= 'Z') {
			flag=1 ;
			if(cout[str[i]]==0)
				putchar(str[i]) ;
			cout[str[i]] ++;
		}


		i++ ;
	}


	if(flag==0) printf("Not Found");

	return 0 ;
}
