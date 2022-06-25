
# include<stdio.h>
int Bsearch(int *p, int n, int x);
int main(void) {
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int x, m;
	scanf("%d",&x);
	m = Bsearch(a, 10, x);
	if(m >= 0)
		printf("Index is %d\n",m);
	else
		printf( "Not Found\n");

	return 0;
}

/* 请在这里填写答案 */

int Bsearch(int *p, int n, int x) {
	int  l=0, r=n-1, mid;

	while(l<=r) {
		mid=(r+l)/2;
		if(p[mid] == x) return mid ;
		else if(x > p[mid]) l = mid +1;
		else r=mid - 1 ;
	}
	return -1 ;

}
