#include <stdio.h>
#include <string.h>
int main()
{
    int i , j;
    char a[5][80],t[80];
    for(i=0;i<5; ++ i) scanf("%s",&a[i]) ;
    for(i = 1;i<5;i ++){
        for(j = 0;j<4;j++ ){
            if(strcmp(a[j],a[j+1])>0){
                strcpy(t,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],t);
            }
        }
    }

    printf("After sorted:\n");
    for(i = 0;i < 5 ;i ++) printf("%s\n",a[i]) ;
}
