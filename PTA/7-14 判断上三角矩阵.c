#include <stdio.h>
#define MAXN 10

int main() {
	int  i , j,n,m,count;
	int a[MAXN][MAXN];

	scanf("%d",&n);

	for(i=0; i<n; i++) {
		scanf("%d",&m);
		for(k=0; k<m; k++) {
			for(j=0; j<m; j++) 
				scanf("%d",&a[k][j]);
			}
			
			for(k=0;k<m;k++)
			{
				for(j=0;j<m;j++)
					if(k>j && a[k][j]!=0) count++;	
			}
			if(count==0)
			
		
	}
}
