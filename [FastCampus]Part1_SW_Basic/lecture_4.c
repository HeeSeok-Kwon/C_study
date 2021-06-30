#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 연산자
	/*int a, b;
	scanf("%d %d", &a, &b);
	printf("%d  + %d = %d\n", a, b, a + b);
	printf("%d  - %d = %d\n", a, b, a - b);
	printf("%d  / %d = %d\n", a, b, a / b);
	printf("%d  %% %d = %d\n", a, b, a % b);
	system("pause");*/

	// 이스케이프 시퀀스
	/*printf("\"A B C D\"");
	printf("\"A\tB\tC\tD\"\n");
	printf("\"A\tB\tC\tD\"\n");
	printf("\"A\tB\tC\tD\"\n");
	system("pause");*/

	// 관계연산자
	/*int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a > b);
	system("pause");*/

	// 논리 연산자
	/*int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", !a);
	printf("%d\n", a && b);
	printf("%d\n", (a > b) && (b > c));
	system("pause");*/

	// 증감연산자
	/*int a = 7;
	printf("%d\n", ++a);
	printf("%d\n", a++);
	printf("%d\n", ++a);
	system("pause");*/

	// 삼항연산자
	int a = 7, b = 7;
	printf("%d\n", (a == b) ? 100: -100);
	system("pause");
	return 0;
}
