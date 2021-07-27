#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int data;
	struct Node* prev;
	struct Node* next;
} Node;

Node* head, * tail;

void insert(int data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	Node* cur;
	cur = head->next;
	while (cur->data < data & cur != tail) { // 오름차순 코드 없다면 뒤에 노드가 붙는 코드
		cur = cur->next;
	}
	Node* prev = cur->prev;
	prev->next = node;
	node->prev = prev;
	cur->prev = node;
	node->next = cur;
}

// head 다음의 노드만 삭제하는 코드
void removeFront() { 
	Node* node = head->next;
	head->next = node->next;
	Node* next = node->next;
	next->prev = head;
	free(node);
}

void show() {
	Node* cur = head->next;
	while (cur != tail) {
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void freeAll() {
	Node* cur = head->next;
	while (cur != tail) {
		Node* next = cur->next;
		free(cur);
		cur = next;
	}
	free(head);
	free(tail);
}
int main(void) {
	head = (Node*)malloc(sizeof(Node));
	tail = (Node*)malloc(sizeof(Node));
	head->next = tail;
	head->prev = head;
	tail->next = tail;
	tail->prev = head;
	insert(2);
	insert(1);
	insert(3);
	insert(9);
	insert(7);
	removeFront();
	show();
	freeAll();
	system("pause");
	return 0;
}
// 양방향 연결 리스트
