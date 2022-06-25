#include <iostream>
using namespace std;
struct Node{
	int val;
	Node* next;
	
	Node(int _val) : val(_val), next(NULL){}
}; 
int main()
{
	Node* p = new Node(1);	//生成一个变量的地址 
	Node* q = new Node(2);
	Node* o = new Node(3);
	Node* m = new Node(4);
	Node* u = new Node(5);
	p -> next = q;
	q -> next = o;
	o -> next = m;
	Node* head = p; 
	//头插法添加结点 
	u -> next = head;
	head = u;
	//删除结点 
	u -> next = p -> next;
	p -> next = NULL;
	//遍历链表 
	for(Node* i = head; i; i = i -> next) cout << i -> val << endl;
	int a = INT_MAX;
	int b = INT_MIN;
	cout << a << endl << b << endl; 
	return 0;
}
