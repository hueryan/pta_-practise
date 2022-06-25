#include <stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	a=n%5 ;
	switch(a){
		case 0:
		case 4:printf("Drying in day %d",n);break;
		default :printf("Fishing in day %d",n);
	}
	return 0 ;
}
