#include <stdio.h>
#define MAXN 999
int main() {
	char str[MAXN] ;
	int i ,ch[MAXN];
	i=0;
	while((str[i]=getchar())!='\n') i++ ;
	str[i]='\0' ;
	i=0 ;
	while(str[i]!='\0') {
		if(str[i]>='0'&&str[i]<='9' ){
		putchar(str[i]) ;
		}
		if(str[i]>='a'&&str[i]<='f') {
		putchar(str[i]) ;
		}
		if(str[i]>='A' &&str[i]<='F') putchar(str[i]) ;
		i++ ;
	}printf("\n");
    i = 1;
    while(str[i]){
        printf("%d",str[i]);
        i ++ ;
    }
    
}

