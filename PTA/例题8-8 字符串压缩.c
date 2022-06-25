#include <stdio.h>
#define MAXS 20

void zip( char *p );
void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main() {
	char s[MAXS];

	ReadString(s);
	zip(s);
	printf("%s\n", s);

	return 0;
}

void zip( char *p ) {
	char *q = p ;
	int n ;
	while(*p != '\0') {
		n=1 ;
		while(*p == *(p+n)) n ++;
		if(n >= 10) {
			*q ++ =(n/10)+'0';
			*q ++ =(n%10)+'0';
		} else if(n>=2) *q ++ =n+'0' ;
		*q++ = *(p+n-1);
		p = p+n;
	}
	*q = '\0';
}
