#include <stdio.h>

double fact( int n );

int main(void)
{    
    int m, n;
    double result; 

    scanf("%d%d", &m, &n);
    if(m > 0 && n > 0 && m <= n){
        result = fact(n)/fact(n-m);
        printf("result = %.0f\n", result);    
    }

    return 0;
}

/* ����������д�� */
double fact( int n ){
	long long i ,a=1;
	for(i = 1 ; i <=n ;i++){
		a*=i ;
	}
	return a ;
}
