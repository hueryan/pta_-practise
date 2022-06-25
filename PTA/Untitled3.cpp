#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <variant>

using namespace std;

struct LinkNode{
	int data;
	LinkNode* next;
	LinkNode(int val) : data(val), next(nullptr){}
};

using LinkList = LinkNode*;

int main()
{
	LinkList dummyHead = new LinkNode(3);
	LinkList p = new LinkNode(1);
	LinkList q = new LinkNode(2);
	dummyHead -> next = p;
	p -> next = q;
	
	int i = 0;
	while(dummyHead->next){
		i ++;
		std::visit(dummyHead);
		dummyHead = dummyHead -> next;
	}
	printf("%d", i);
	return 0;
}
