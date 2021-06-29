#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//int a;
	//scanf("%d", &a);
	//printf("입력한 숫자는 %d입니다.\n", a);
	//printf("%%"); // % 출력할 때

	/*double a;
	scanf("%lf", &a);
	printf("%.2f\n", a);*/

	/*int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", b, a);*/

	int a, b, c;
	scanf("%1d%1d%1d", &a, &b, &c); // 578 --> 5 7 8
	printf("%d %d %d\n", a, b, c);

	system("pause");
	return 0;
}
