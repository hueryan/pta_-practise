#include <stdio.h>
#define MAXN 99
int main() {
	int n ,i ;
	char str[MAXN] ,ch[MAXN],m;
	i=0 ;
	while((str[i]=getchar())!='\n') i++;
	str[i]='\0' ;
//	printf("\n");
	scanf("%d",&n) ;
	if(n<0) {
		printf("Invalid.") ;
		return 0 ;
	} else {
		for(i=0; str[i]!='\0'; i++) {
			if(str[i]>='A' && str[i]<='Z') {
				m = (str[i]-'A' + n) % 26;
				str[i] = 'A' + m;
			} else {
				if(str[i]>='a' && str[i]<='z') {
					m = (str[i]-'a' + n) % 26;
					str[i] = 'a' + m;
				}
			}
		}

	}
//	for(i = 0;str[i] != '0';i++){
//		putchar(str[i]) ;
//	}
	puts(str) ;
	return 0 ;
}
