#include <stdio.h>
#include <string.h>
int main(){
	int i , n ;
	char a[80] ,min[80] ;
	scanf("%d",&n) ;
	scanf("%s",a) ;
	strcpy(min,a);
	for(i=1;i<n;i++){
		scanf("%s",a);
		if(strcmp(min,a)>0){
			strcpy(min,a);
		}
	}
	printf("Min is: %s",min) ;
	return 0 ;
}
