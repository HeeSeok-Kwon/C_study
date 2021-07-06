#include <stdio.h>

int main()
{
	// 포인터의 개념
	/*int a = 5;
	int* b = &a;
	printf("%d\n", *b);
	system("pause");*/

	// 배열 각 원소의 주소 값 출력하기
	/*int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d\n", &a[i]);
	}
	system("pause");*/

	// 다중 포인터
	/*int a = 5;
	int* b = &a;
	int** c = &b;
	printf("%d\n", **c);
	system("pause");*/

	// 배열과 포인터
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* b = a; // 배열의 이름 자체 = 배열의 첫 번째 원소 주소값
	printf("%d\n", b[2]);
	system("pause");
	return 0;
}

// 포인터
