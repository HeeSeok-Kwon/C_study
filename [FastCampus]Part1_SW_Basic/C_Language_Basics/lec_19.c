// 배열 기반의 연결 리스트
//#include <stdio.h>
//#define INF 10000
//
//int arr[INF];
//int count = 0;
//
//void addBack(int data) {
//	arr[count] = data;
//	count++;
//}
//
//void addFirst(int data) {
//	for (int i = count; i >= 1; i--) {
//		arr[i] = arr[i - 1];
//	}
//	arr[0] = data;
//	count++;
//}
//
//void show() {
//	for (int i = 0; i < count; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//// 특정한 인덱스 원소 삭제 -- 내 답안
//void delete(int idx) {
//	for (int i = idx; i < count; i++) { // count --> count - 1 불필요하게 한 바퀴 더 돈다.
//		arr[i] = arr[i+1];
//	}
//	count--;
//}
//// 특정한 인덱스 원소 삭제 -- 교재 답안
//void removeAt(int index) {
//	for (int i = index; i < count - 1; i++) {
//		arr[i] = arr[i + 1];
//	}
//	count--;
//}
//int main()
//{
//	addFirst(4); // count = 1
//	addFirst(5); // count = 2
//	addFirst(1); // count = 3
//	addBack(7);  // count = 4
//	addBack(6);  // count = 5
//	addBack(8);  // count = 6
//	show();
//	/*delete(3);
//	show();*/
//	removeAt(3);
//	show();
//	system("pause");
//	return 0;
//}



// 포인터  연결 리스트
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int data;
	struct Node* next;
} Node;

Node* head;

void addFront(Node* root, int data) { // root의 뒤에 붙는 코드
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = root->next;
	root->next = node;
}

void removeFront(Node* root) { // root 다음 노드를 삭제
	Node* front = root->next;
	root->next = front->next;
	free(front);
}

void freeAll(Node* root) {
	Node* cur = head->next;
	while (cur != NULL) {
		Node* next = cur->next;
		free(cur);
		cur = next;
	}
	free(head); // head 할당 해제 코드 추가
}

void showAll(Node* root) {
	Node* cur = head->next;
	while (cur != NULL) {
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n"); // 개행 코드 추가
}

// 내가 만든 메모리 해제 함수
//void memoryFree(Node* node) {
//	free(node);
//}

int main(void) {
	/*head = (Node*)malloc(sizeof(Node));
	Node* node1 = (Node*)malloc(sizeof(Node));
	node1->data = 1;
	Node* node2 = (Node*)malloc(sizeof(Node));
	node2->data = 2;
	head->next = node1;
	node1->next = node2;
	node2->next = NULL;
	Node* cur = head->next;
	while (cur != NULL) {
		printf("%d ", cur->data);
		cur = cur->next;
	}
	free(head);
	free(node1);
	free(node2);*/

	head = (Node*)malloc(sizeof(Node));
	head->next = NULL;
	addFront(head, 2);
	addFront(head, 1);
	addFront(head, 7);
	addFront(head, 9);
	addFront(head, 8);
	removeFront(head);
	showAll(head);
	freeAll(head);
	system("pause");
	return 0;
}

// 연결 리스트
