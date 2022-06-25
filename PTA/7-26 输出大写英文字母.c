#include <stdio.h>
#define MAXN 80

int main() {
	char str[MAXN],a[MAXN];
	int i , j ,flag=0;
	int cout[MAXN]= {0} ;
	i=0;
	while((str[i]=getchar()) != '\n') i++;
	str[i]='\0' ;


	i=0;
	while(str[i] != '\0') {
		if(str[i]>='A' && str[i] <= 'Z') {
			cout[str[i]]++ ;
		} else {
			flag=0 ; 
		}
		i++ ;
	}

	i=0 ;
	while(str[i]!='\0') {
		if(cout[i]!=0) {
			putchar(str[i]) ;
		}
		i++ ;
	}
	if(flag==0) printf("Not Found");
	return 0 ;

}


