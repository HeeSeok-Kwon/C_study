#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 1000

int a[SIZE];

int swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void quickSort(int start, int end) {
	if (start >= end) return;
	int key = start, i = start + 1, j = end;
	while (i <= j) { 
		while (i <= end && a[i] <= a[key]) i++; // key 위치의 값보다 크거나 같은 값의 인덱스 
		while (j > start && a[j] >= a[key]) j--; // key 위치의 값보다 작거나 같은 값의 인덱스 
		if (i > j) swap(&a[key], &a[j]);
		else swap(&a[i], &a[j]);
	}
	quickSort(start, j - 1);
	quickSort(j + 1, end); // pivot이 계속 앞으로 움직임
}

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	quickSort(0, n - 1);
	for (int i = 0; i < n; i++) printf("%d ", a[i]);
	system("pause");
	return 0;
}

// 시간 복잡도 O(NlogN)
// 편항된 분할이 발생할 때 연산의 양이 O(N^2)
