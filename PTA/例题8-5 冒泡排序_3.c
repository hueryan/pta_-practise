#include <stdio.h>
void bubble (int a[ ], int n);
int main(void) {
	int n, a[10];
	int i;
	scanf("%d", &n);
	for (i=0; i<n; i++)
		scanf("%d",&a[i]);
	bubble(a,n);
	for (i=0; i<n; i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
void bubble (int a[ ], int n) {
	int i , j ,t ,flag = 1 ;
	for(i = 0 ; i < n && flag; i ++) {
		flag = 0 ;
		for(j = 0 ; j < n - 1 - i; j ++) {
			if(a[j] > a[j + 1 ]) {
				t = a [j] ;
				a[j] = a[j + 1];
				a[j + 1] = t ;
				flag = 1 ;
			}
		}
	}
}
