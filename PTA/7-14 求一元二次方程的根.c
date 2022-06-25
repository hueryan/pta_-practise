#include <stdio.h>
#include <math.h>
int main() {
	double a,b,c ;
	double x1,x2;
	scanf("%lf %lf %lf",&a,&b,&c) ;
	double dt=b*b-4*a*c ;
	if(a==0) {
		if(b==0) {
			if(c==0) printf("Zero Equation") ;
			else printf("Not An Equation") ;
		}
		if(b != 0) {
			if(c==0) printf("0.00") ;
			else printf("%.2f",-c/b) ;
		}
	} else if(a != 0) {
		if(dt>0) {
			x1=(-b+sqrt(dt))/(2*a);
			x2=(-b-sqrt(dt))/(2*a);
			printf("%.2f\n%.2f",x1,x2);
		} else if(dt==0) {
			x1 = -b/2*a;
			printf("%.2f",x1);
		} else if(dt<0) {
			double t=-(b/(2*a));
			double m=sqrt(-dt)/(2*a);
			if(b!=0) {

				printf("%.2f+%.2fi\n",t,m);
				printf("%.2f-%.2fi",t,m);
			} else {
				printf("0.00+%.2fi\n",m);
				printf("0.00-%.2fi",m);
			}
		}
	}
}
