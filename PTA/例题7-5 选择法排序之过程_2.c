#include <stdio.h>
#define MAXN 99
int main() {
	int i ,j,n ,min;
	int a[MAXN]= {0} ,t;		//定义数组
	scanf("%d",&n) ;
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);		//循环输入数据
	}
	if(n==1) printf("%d",a[0]) ;
	else {
		for(i=0; i<n-1; i++) {	//控制外层循环，遍历与之比较大小
			min=i ;
			for(j=i+1; j<n; j++) {
				if(a[min]>a[j]) {
					min=j;
				}
				t=a[min];
				a[min]=a[i];
				a[i]=t;		 //如果if条件成立则交换
				for(j=0; j<n; j++) {
					if(j) printf(" ");
					printf("%d",a[j]);	//如果j为真则输入空格，接着打印数据
				}
				printf("\n");	//每执行完一次循环，换行接着进行下一轮循环

			}
		}
	}
	return 0 ;
}
