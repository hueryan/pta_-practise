#include <stdio.h>
int main()
{
    char a[81];
    gets(a);
    while(a[0] != '#'){
        printf("%c",a[0]);
        gets(a);
    }
}
