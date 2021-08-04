// 배열을 이용한 큐
//#include <stdio.h>
//#define SIZE 10000
//#define INF 99999999
//
//int queue[SIZE];
//int front = 0;
//int rear = 0;
//
//void push(int data) {
//	if (rear >= SIZE) {
//		printf("큐 오버플로우가 발생했습니다.\n");
//		return;
//	}
//	queue[rear++] = data;
//}
//
//void pop() {
//	if (front == rear) {
//		printf("큐 언더플로우가 발생했습니다.\n");
//		return -INF;
//	}
//	return queue[front++];
//}
//
//void show() {
//	printf("--- 큐의 앞 ---\n");
//	for (int i = front; i < rear; i++) {
//		printf("%d\n", queue[i]);
//	}
//	printf("--- 큐의 뒤 ---\n");
//}
//
//
//int main(void) {
//	push(7);
//	push(5);
//	push(4);
//	pop();
//	push(6);
//	pop();
//	show();
//	system("pause");
//	return 0;
//}

// 연결 리스트를 이용한 큐
#include <stdio.h>
#include <stdlib.h>
#define INF 99999999

typedef struct {
	int data;
	struct Node* next;
} Node;

typedef struct {
	Node* front;
	Node* rear;
	int count;
}Queue;

void push(Queue* queue, int data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	if (queue->count == 0) {
		queue->front = node;
	}
	else {
		queue->rear->next = node;
	}
	queue->rear = node;
	queue->count++;
}

int pop(Queue* queue) {
	if (queue->count == 0) {
		printf("큐 언더플로우가 발생했습니다.\n");
		return -INF;
	}
	Node* node = queue->front;
	int data = node->data;
	queue->front = node->next;
	free(node);
	queue->count--;
	return data;
}

void show(Queue* queue) {
	Node* cur = queue->front;
	printf("--- 큐의 앞 ---\n");
	while (cur != NULL) {
		printf("%d\n", cur->data);
		cur = cur->next;
	}
	printf("--- 큐의 뒤 ---\n");
}

int main(void) {
	Queue queue;
	queue.front = queue.rear = NULL;
	queue.count = 0;
	push(&queue, 7);
	push(&queue, 5);
	push(&queue, 4);
	pop(&queue);
	push(&queue, 6);
	pop(&queue);
	system("pause");
	return 0;
}

// 연결 리스트 큐는 메모리 해제, 연결 방식으로 작동
// 단순 배열 큐처럼 front와 rear의 index를 고려할 필요가 없다.
// 최대 메모리 허용 범위까지 큐 크기를 결정할 수 있기 때문에 큐의 최대 크기를 안 정해도 된다.
