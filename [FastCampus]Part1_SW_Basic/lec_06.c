#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 반복문
	// 
	// 1부터 100까지의 정수 출력하기
	// 전통 C언어 방법
	/*int i;
	for (i = 0; i <= 100; i++) {
		printf("%d\n", i);
	}*/
	// 현대 C언어 방법
	/*for (int i = 0; i <= 100; i++) {
		printf("%d\n", i);
	}
	system("pause");*/

	// 1부터 n까지의 합 출력하기
	/*int n, sum = 0;
	printf("n을 입력하세요. ");
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
		sum = sum + i;
	}
	printf("%d\n", sum);
	system("pause");*/

	// 무한 루프 예제1
	/*for (;;) {
		printf("Hello World\n");
	}
	system("pause");*/

	// 무한 루프 예제2
	/*for (int i = 0; i <= 100; i--) {
		printf("Hello World\n");
	}
	system("pause");*/

	// -1이 입력될 때까지 더하기
	/*int sum = 0;
	for (; 1;) {
		int x;
		scanf("%d", &x);
		if (x == -1) break;
		sum += x;
	}
	printf("%d\n", sum);
	system("pause");*/

	// 특정 문자를 N번 출력하기
	/*int n;
	char a;
	scanf("%d %c", &n, &a);
	while (n--) {
		printf("%c ", a);
	}
	system("pause");*/

	// 특정 숫자의 구구단 출력하기
	/*int n;
	scanf("%d", &n);
	int i = 1;
	while (i <= 9) {
		printf("%d * %d = %d\n", n, i, n * i);
		i++;
	}
	system("pause");*/

	// 구구단 출력하기(while문)
	/*int i = 1;
	while (i <= 9) {
		int j = 1;
		while (j <= 9) {
			printf("%d * %d = %d\n", i, j, i * j);
			j++;
		}
		printf("\n");
		i++;
	}
	system("pause");*/

	// 구구단 출력하기(for문)
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
	system("pause");

	return 0;
}
