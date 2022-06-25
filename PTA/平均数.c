#include <stdio.h>
#include <math.h>
int main()
{
    int x , y ,z ;
    double sum=0.0 ,ave;
    scanf("%d %d %d",&x,&y,&z) ;

    sum = x+y+z ;
    ave = sum / 3;
    printf("%.2f",ave) ;
    return 0 ;
}
