// 배열을 이용한 큐
#include <stdio.h>
#define SIZE 5
#define INF 99999999

int queue[SIZE];
int front = 0;
int rear = 0;
int chk = 0; // 1 : push 가능 , 2 : queue 가득찬 상태, 3 : pop 가능, 4 : queue 비어있는 상태

void push(int data) {
	if (rear >= SIZE) {
		if (front != 0) { rear = 0; queue[rear++] = data; chk = 1;  return; }
		else { printf("큐가 가득 찼습니다.\n"); chk = 2;  return; }
	}
	else if (chk != 0 && front == rear) { printf("큐가 가득 찼습니다.\n"); chk = 2;  return; }
	queue[rear++] = data;
	chk = 1;
}

int pop() {
	if (chk != 2 && front == rear) { printf("큐가 비어 있습니다.\n"); chk = 4;  return -INF; }
	else if (front != rear && front >= SIZE) {
		if (rear != 0) { front = 0; queue[front++]; chk = 3;  return -INF; }
		else { printf("큐가 비어 있습니다.\n");  chk = 4; return -INF;}
	}
	chk = 3;
	return queue[front++];
}

void show() {
	if ((front == rear && chk == 3) || chk == 4) { printf("\n"); return; }
	if (front < rear) {
		for (int i = front; i < rear; i++) 
			printf("%d ", queue[i]);
	} 
	else if (front >= rear) {
		for (int i = front; i < SIZE; i++) 
			printf("%d ", queue[i]);
		for (int j = 0; j < rear; j++) 
			printf("%d ", queue[j]);
	}
	printf("\n");
}

int main(void) {
	push(1);
	push(2);
	push(3);
	push(4);
	pop();
	push(5);
	pop();
	push(6);
	show();
	push(7);
	push(8);
	show();
	pop();
	show();
	pop();
	show();
	pop();
	show();
	pop();
	show();
	pop();
	show();
	pop();
	system("pause");
	return 0;
}
