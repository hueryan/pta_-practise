#include <stdio.h>
int main()
{
	int a[2];
	
	scanf("%d %d",&a[0],&a[1]);
	double x =1.0*(a[0]-a[1])*100/a[1];
	if(x<10) printf("OK") ;
	else if(x>=50) printf("Exceed %1.f%%. License Revoked",x);
	else if(x>=10 && x<50) printf("Exceed %1.f%%. Ticket 200",x);
 }

