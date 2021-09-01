#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#define SIZE 1000

int a[SIZE];

int swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// 선택 정렬 - 선택 정렬 수행하기
//int main(void) {
//	int n, min, index;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
//	for (int i = 0; i < n; i++) {
//		min = INT_MAX; // 가장 큰 수를 할당
//		for (int j = i; j < n; j++) {
//			if (min > a[j]) {
//				min = a[i];
//				index = j;
//			}
//		}
//		swap(&a[i], &a[index]);
//	}
//	for (int i = 0; i < n; i++) printf("%d ", a[i]);
//
//	system("pause");
//	return 0;
//}

// 삽입 정렬 - 삽입 정렬 수행하기
int main(void) {
	int n, min, index;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	for (int i = 0; i < n - 1; i++) {
		int j = i; // i는 계속 증가, j에 할당
		while (j >= 0 && a[j] > a[j + 1]) { // 연속되는 원소 비교
			swap(&a[j], &a[j + 1]); // 조건에 맞으면 계속 자리를 바꿔줌
			j--; // 증가된 i가 할당된 j 위치를 앞으로 옮겨가며 swap 수행
		}
	}
	for (int i = 0; i < n; i++) printf("%d ", a[i]);

	system("pause");
	return 0;
}

// 선택정렬, 삽입정렬 시간 복잡도 - O(N^2)
