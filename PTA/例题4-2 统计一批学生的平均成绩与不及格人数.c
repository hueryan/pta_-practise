#include <stdio.h>
int main()
{
	double a[81];
	double sum=0,x;
	int cout=0,i=0,k;
	i=0;
	while(a[i]>=0){
		scanf("%lf ",&a[i]);
		sum+=a[i] ;
		if(a[i]<60) cout++;
		i ++;
	}
	x=sum/(i-1);
	}printf("Average = %.2f\nCount = %d",x,cout);
	return 0 ;
}
