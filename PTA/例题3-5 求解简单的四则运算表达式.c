#include <stdio.h>
int main()
{
    double a ,  b ;
    char op ;

    scanf("%lf%c%lf",&a,&op,&b) ;
    switch(op){
        case '+' :
            printf("%.2f",a+b) ;
            break ;
        case '-' :
            printf("%.2f",a-b) ;
            break ;
        case '*' :
             printf("%.2f",a*b) ;
             break ;
        case '/' :
            if(b!=0) {
			printf("%.2f",a/b) ;
            break ;
            }else printf("Divisor can not be 0!");
            break ;
        default:
        	printf("Unknown operator!") ;
        }
        return 0 ;
}
