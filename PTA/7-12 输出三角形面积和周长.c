#include <stdio.h>
#include <math.h>
int main()
{
	int a , b , c ;
	double s , l ;
	scanf("%d %d %d",&a,&b,&c) ;
	l = a +b +c;
	s = sqrt(l/2*(l/2-a)*(l/2-b)*(l/2-c)) ;
	if(a+b>c && a+c>b && b+c>a) printf("area = %.2f; perimeter = %.2f",s,l);
	else printf("These sides do not correspond to a valid triangle");
	return 0 ;
}
