#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_VALUE 10001

int n, m;
int a[MAX_VALUE]; // 많은 메모리 요구, 크기 제한 필요

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) { scanf("%d", &m); a[m]++; }
	for (int i = 0; i < MAX_VALUE; i++) {
		while (a[i] != 0) { printf("%d ", i); a[i]--; }
	}

	system("pause");
	return 0;
}

// 시간 복잡도 O(N)
// 데이터의 크기가 한정적일 때 사용
