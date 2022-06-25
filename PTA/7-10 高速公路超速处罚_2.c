#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y) ;
	double a=1.0*(x-y)/y*100;
	if(x<1.1*y) printf("OK") ;
	else if(x<1.5*y) printf("Exceed %.0f%%. Ticket 200",a);
	else printf("Exceed %.0f%%. License Revoked",a);
	return 0 ;
}
