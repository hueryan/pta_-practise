#include <iostream>
using namespace std;
struct Node{
	int val;
	Node* next;
	
	Node(int _val) : val(_val), next(NULL){}
}; 
int main()
{
	Node* p = new Node(1);	//����һ�������ĵ�ַ 
	Node* q = new Node(2);
	Node* o = new Node(3);
	Node* m = new Node(4);
	Node* u = new Node(5);
	p -> next = q;
	q -> next = o;
	o -> next = m;
	Node* head = p; 
	//ͷ�巨��ӽ�� 
	u -> next = head;
	head = u;
	//ɾ����� 
	u -> next = p -> next;
	p -> next = NULL;
	//�������� 
	for(Node* i = head; i; i = i -> next) cout << i -> val << endl;
	int a = INT_MAX;
	int b = INT_MIN;
	cout << a << endl << b << endl; 
	return 0;
}
