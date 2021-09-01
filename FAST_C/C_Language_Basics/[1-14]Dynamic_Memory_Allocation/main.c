#include <stdio.h>
#include <stdlib.h> // malloc
#include <string.h> // memset

int main()
{
	// 동적 메모리 할당 함수
	/*int* a = malloc(sizeof(int));
	printf("%d\n", a);
	a = malloc(sizeof(int));
	printf("%d\n", a);
	system("pause");*/

	// 메모리 해제
	/*int* a = malloc(sizeof(int));
	printf("%d\n", a);
	free(a);
	a = malloc(sizeof(int));
	printf("%d\n", a);
	free(a);
	system("pause");*/

	// 동적으로 문자열 처리하기
	/*char* a = malloc(100);
	memset(a, 'A', 100);
	for (int i = 0; i < 100; i++) {
		printf("%c ", a[i]);
	}
	free(a);
	system("pause");*/

	// 동적 메모리 할당의 다양한 예제
	int** p = (int**)malloc(sizeof(int*) * 3); // 3개의 행을 가리키는 포인터
	printf("할당 메모리 : %p\n", p);
	for (int i = 0; i < 3; i++) {
		*(p + i) = (int*)malloc(sizeof(int) * 3);
		printf("할당 메모리 : %p\n", *(p + i));
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			*(*(p + i) + j) = i * 3 + j;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
	// 메모리 해제
	for (int j = 0; j < 3; j++) {
		printf("해제 메모리 : %p\n", p[j]);
		free(p[j]);
	}
	printf("해제 메모리 : %p\n", p);
	free(p);
	system("pause");
	return 0;
}
// 동적 메모리 할당
