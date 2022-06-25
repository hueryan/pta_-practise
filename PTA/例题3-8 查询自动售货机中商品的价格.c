#include <stdio.h>
int main()
{
	int i ;
	double a[5] ;
	for(i=1;i<5;i++){
		scanf("%d",&a[i]);
		switch(a[i]){
			case 0:break;
			case 1:printf("price = 3.0\n") ;
			case 2:printf("price = 2.5\n") ;
			case 3:printf("price = 4.0\n") ;
			case 4:printf("price = 3.5\n") ;
			default:printf("price = 0.0\n") ;
		}printf("Thanks") ;
	}
}
