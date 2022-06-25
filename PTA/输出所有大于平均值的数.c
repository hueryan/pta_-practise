#include <stdio.h>
int main()
{
    int n , i ;
    scanf("%d\n" , &n) ;
    int a[10] ;
    double sum  , ave ;

    if(n > 10 || n < 1) printf("Invalid.") ;
    else{
        for(i = 0 ; i < n ;i ++){
            scanf("%d" ,&a[i]) ;
            sum+=a[i] ;
    }
       /* for(i = 0 ,sum = 0 ; i < n ;i ++){
        sum +=a[i] ;}*/
    ave = sum *1.0/ n ;
    printf("%.2f\n",ave) ;

    for(i = 0 ;i < n ; i++){
        if(a[i]>ave) printf("%d ",a[i]) ;
        
    } printf("\n") ;

    }
    return 0 ;
}
