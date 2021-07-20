#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void dice(int input) {
	printf("시몬이가 던진 주사위: %d\n", input);
}

int add(int a, int b) {
	return a + b;
}

void calculator(int a, int b) {
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("\n");
}

int factorial(int a) {
	if (a == 1) return 1;
	return a * factorial(a - 1);
}

int main()
{
	// 말머리 붙이기
	/*dice(3);
	dice(5);
	dice(1);
	system("pause");*/

	// 더하기 함수
	/*printf("%d\n", add(10, 20));
	printf("%d\n", add(50, -30));
	printf("%d\n", add(70, 125));
	system("pause");*/

	// 사칙연산 함수 
	/*calculator(10, 3);
	calculator(15, 2);
	calculator(18, 4);
	system("pause");*/

	// 재귀 함수를 이용한 팩토리얼
	int n;
	printf("n 팩토리얼을 계산합니다. ");
	scanf("%d", &n);
	printf("%d\n", factorial(n));
	system("pause");
	return 0;
}

// 함수
