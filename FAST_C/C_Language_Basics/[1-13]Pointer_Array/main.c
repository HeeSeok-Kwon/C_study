#include <stdio.h>
// 2차원 배열
//int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

// 3차원 배열
//int a[2][3][3] = { {{1,2,3},{4,5,6},{7,8,9}},{{1,2,3},{4,5,6},{7,8,9}}};
int main()
{
	// 2차원 배열
	/*int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	system("pause");*/

	// 3차원 배열
	/*int i, j, k;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 3; k++) {
				printf("%d ", a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	system("pause");*/

	// 포인터 배열의 구조 분석
	/*int a = 10;
	int b[10];
	b = &a;
	system("pause");*/

	// 포인터를 배열처럼 사용
	/*int a[5] = { 1,2,3,4,5 };
	int* b = &a;
	printf("%d\n", b[2]);
	system("pause");*/

	// 배열의 이름은 배열의 첫 번째 원소
	/*int a[5] = { 1,2,3,4,5 };
	int* b = &a[0];
	printf("%d\n", b[2]);
	system("pause");*/

	// 포인터 연산은 자료형의 크기만큼 이동
	//int a[5] = { 1,2,3,4,5 };
	//int i;
	//for (i = 0; i < 5; i++) {
	//	//printf("%p ", a + i);
	//	//printf("%d ", *(a + i));
	//	printf("%d ", a[i]);
	//}
	//system("pause");

	// 크기가 10인 double형 배열을 선언했을 때, 배열 시작 주소가 X이다.
	// 이 때 배열의 마지막 원소의 주소는 몇일까?
	/*double b[10];
	printf("%d %d\n", b, b + 9);
	printf("\n");
	printf("%p %p\n", b, b + 9);
	system("pause");*/

	// 배열을 포인터처럼 사용
	/*int a[5] = { 1,2,3,4,5 };
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d ", *(a + i));
	}
	system("pause");*/

	// 다음 프로그램 결과는 어떻게 될까?
	/*int a[5] = { 1,2,3,4,5 };
	int* p = a;
	printf("%d\n", *(p++));
	printf("%d\n", *(++p));
	printf("%d\n", *(p+2));
	system("pause");*/

	// 2차원 배열 : 포인터로 처리
	int a[2][5] = { {1,2,3,4,5},{6,7,8,9,10} };
	int(*p)[5] = a[1];
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d ", p[0][i]);
	}
	system("pause");
	return 0;
}
// 다차원 배열과 포인터 배열
