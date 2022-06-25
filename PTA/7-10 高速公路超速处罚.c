#include<stdio.h>
int main()
{
double c,x,d;
scanf("%lf %lf",&c,&x);
if(c<1.1*x)
{
printf("OK");
}else if(c<1.5*x)
      {
       d=(c-x)/x*100;
       printf("Exceed %.0f%%. Ticket 200",d);
      }else
          {
           d=(c-x)/x*100;
           printf("Exceed %.0f%%. License Revoked",d);
          }
return 0;
}
