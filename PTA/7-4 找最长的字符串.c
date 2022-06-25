#include <stdio.h>
#include <string.h>
int main()
{
	int n,i,len[80],j,max;
	char a[80][80] ,sh[80][80] ;
	scanf("%d",&n);
	scanf("%s",a);
	strcpy(sh,a);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
		len=strlen(a[i]);
	}for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if(len[j]>len[j+1]){
				max=j;	
			}
		}
		printf("The longest is: %s",a[max]);
	}
}
