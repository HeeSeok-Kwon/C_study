// 배열을 이용한 스택
//#include <stdio.h>
//#define SIZE 10000
//#define INF 99999999
//
//int stack[SIZE];
//int top = -1;
//
//void push(int data) {
//	if (top == SIZE - 1) {
//		printf("스택 오버플로우가 발생했습니다.\n");
//		return;
//	}
//	stack[++top] = data;
//}
//
//void pop() {
//	if (top == -1) {
//		printf("스택 언더플로우가 발생했습니다.\n");
//		return;
//	}
//	return stack[top--];
//}
//
//void show() {
//	printf("--- 스택의 최상단 ---\n");
//	for (int i = top; i >= 0; i--) {
//		printf("%d\n", stack[i]);
//	}
//	printf("--- 스택의 최하단 ---\n");
//}
//
//int main(void) {
//	push(7);
//	push(5);
//	push(4);
//	pop();
//	push(6);
//	pop();
//	show();
//
//	system("pause");
//	return 0;
//}

// 연결리스트를 이용한 스택
#include <stdio.h>
#include <stdlib.h>
#define INF 99999999

typedef struct {
	int data;
	struct Node* next;
}Node;

typedef struct {
	Node* top;
}Stack;

void push(Stack* stack, int data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = stack->top;
	stack->top = node;
}

int pop(Stack* stack) {
	if (stack->top == NULL) {
		printf("스택 언더플로우가 발생했습니다.\n");
		return -INF;
	}
	Node* node = stack->top;
	int data = node->data;
	stack->top = node->next;
	free(node);
	return data;
}

void show(Stack* stack) {
	Node* cur = stack->top;
	printf("--- 스택의 최상단 ---\n");
	while (cur != NULL) {
		printf("%d\n", cur->data);
		cur = cur->next;
	}
	printf("--- 스택의 최하단 ---\n");
}

int main(void) {
	Stack stack;
	stack.top = NULL;
	show(&stack);
	push(&stack, 7);
	push(&stack, 5);
	push(&stack, 4);
	pop(&stack);
	push(&stack, 6);
	pop(&stack);
	show(&stack);
	system("pause");
	return 0;
}
