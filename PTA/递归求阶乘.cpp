#include <iostream>
using namespace std;

struct Person{
	int age, height;
	double money;
	
	Person(int _age, int _height, double _money) : age(_age), height(_height), money(_money) {}
};

int main()
{
	Person P = {18, 180, 1314.99};
	cout << P.money << endl;
	return 0;
}
