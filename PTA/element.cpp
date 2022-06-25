#include <bits/stdc++.h>
#include <ctime>
using namespace std;

int main()
{
	int a[] = {0};
	for(int i = 0; i < 6; i++) a[i] = rand();

	for(int i = 0; i < 7; i++) cout << a[i] << ' ';
	cout << endl;
	
	cout << min_element(a, a + 7) - a<< endl;
    
    return 0;
}
