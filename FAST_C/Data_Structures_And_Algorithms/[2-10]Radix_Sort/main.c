#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000

void radixSort(int* a, int n) {
	int res[MAX], maxValue = 0;
	int exp = 1; // 1의 자리, 10의 자리, 100의 자리 ...
	for (int i = 0; i < n; i++) {
		if (a[i] > maxValue) maxValue = a[i];
	}
	while (maxValue / exp > 0) { // 1의 자리부터 시작 ~ 가장 큰 자릿수까지만 반복
		int bucket[10] = { 0 };
		for (int i = 0; i < n; i++) bucket[a[i] / exp % 10]++; // 자릿수 카운팅
		for (int i = 1; i < 10; i++) bucket[i] += bucket[i - 1]; // 누적 계산
		for (int i = n - 1; i >= 0; i--) {
			res[--bucket[a[i] / exp % 10]] = a[i]; // res[bucket[a[i] / exp % 10]-1] --> bucket 값을 바꾸지 않음
		}
		for (int i = 0; i < n; i++) a[i] = res[i]; // 기존 배열 갱신
		exp *= 10;
	}
}

int main() {
	int a[MAX];
	int i, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%d", &a[i]);
	radixSort(a, n);
	for (i = 0; i < n; i++) printf("%d ", a[i]);
	system("pause");
	return 0;
}

// 기수정렬
// 시간복잡도 O(DN)
