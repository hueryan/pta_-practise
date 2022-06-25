#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> a({1,1,2,2,3,3,4,4,5,5});
	int b = 6;
	for(int x : a) cout << x << ' ';
	cout << endl;
	
	
	
	
	
	string s = "Hello Worle!";
	for(char c : s) cout << c << endl;

	return 0;
}
