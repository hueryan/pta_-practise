typedef int DataType;
struct ListNode{
	DataType data;
	ListNode *next;
};

// ���Ĵ��� 
// template <typename data>
struct ListCreatNode(data){
	ListNode *node = (ListNode *) malloc (sizeof(ListNode));
	node -> data = data;
	node ->next = nullptr;
	return node;
};

// β�巨
 ListNode *ListCreatListByTail(int n, int a[]){
 	ListNode *head, *tail, *vtx;
 	int idx = 0;
 	if(n <= 0) return nullptr;
 	vtx = ListCreatNode(a[0]);
 	head = tail = vtx;
 	while(++idx < n){
	 	vtx = ListCreatNode(a[idx]);
	 	tail->next = vtx;
	 	tail = vtx;
	 }
	 return head;
 }
 
 // ͷ�巨
ListNode *ListCreatListByHead(int n, int a[]){
	ListNode *head = nullptr, *vtx;
	while(n --){
		vtx = ListCreatNode(a[n]);
		vtx->next = head;
		head = vtx;
	}
	return head;
}

// ��ӡ�б�
void ListPrint(ListNode *head){
	ListNode *vtx = head;
	while(vtx){
		printf("%d -> ", vtx->data);
		vtx = vtx->next;
	}
	printf("nullptr\n");
}

int main()
{
	
	return 0;
}
