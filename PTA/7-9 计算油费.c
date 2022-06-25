#include <stdio.h>
int main()
{
	int a , b ;
	double d , f ;
	char c ;
	scanf("%d %d %c" ,&a ,&b,&c) ;
	switch(b){
		case 90 : d = 6.95 ;break ;
		case 93 : d = 7.44 ;break ;
		case 97 : d = 7.93 ;break ;
	}switch(c){
		case 'm': f = 1 - 0.05 ;break ;
		case 'e': f = 1 - 0.03 ;break ;
	}printf("%.2f",a*d*f) ;
	return 0 ;
 } 
