#include <stdio.h>
int main()
{
	double x ;
	int t=0 ;
	double money ;
	scanf("%lf %d",&x ,&t) ;
	if(t<5){
		if(x<=3) money = 10 ;
		else if(x<=10) money = 10+2*(x-3) ;
		else money = 24+(x-10)*3;
	}else{
		if(x<=3) money = 10+t/5*2 ;
		else if(x<=10) money = 10+2*(x-3)+t/5*2;
		else money = 24+(x-10)*3+t/5*2;
	}
	printf("%.0f",money) ;
	
}
