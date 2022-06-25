#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[100];
	scanf("%[^\n]", str);
	
	int len = strlen(str);
	int top = 0, end = len - 1;
	while(top < end){
		swap(str[top], str[end]);
		top ++;
		end --;
	}
	
	puts(str);
	return 0;
}
