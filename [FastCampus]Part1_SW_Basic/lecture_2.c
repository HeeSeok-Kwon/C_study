#include <stdio.h>

//int a; // 정적 변수는 0으로 초기화

int main()
{
	int a = 7;
	//int a; // 초기화되지 않은 변수에는 쓰레기값이 들어간다.
	printf("The number is %d.\n", a);
	system("pause");
	return 0;
}
