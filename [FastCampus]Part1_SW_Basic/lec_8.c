#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main()
{
	// 배열의 선언과 초기화
	////int a[10] = { 6,5,4,3,9,8,0,1,2,7 };
	//int a[10] = { 0, };
	//int i;
	//for (i = 0; i < 10; i++) {
	//	printf("%d ", a[i]);
	//}
	//system("pause");

	// 배열의 원소 중에서 최댓값 찾기
  // #include <limits.h> --> INT_MIN
	/*int a[10] = { 6,5,4,3,9,8,0,1,2,7 };
	int i, maxValue = INT_MIN;
	for (i = 0; i < 10; i++) {
		if (maxValue < a[i]) maxValue = a[i];
	}
	printf("%d\n", maxValue);
	system("pause");*/

	// 문자열과 배열
	/*char a[20];
	scanf("%s", a);
	printf("%s\n", a);
	system("pause");*/

	// 문자열과 배열
	/*char a[20] = "Hello World";
	a[4] = ',';
	printf("%s\n", a);
	system("pause");*/

	// 문자열에 포함된 l의 개수 출력하기
	char a[] = "Hello World";
	int count = 0;
	for (int i = 0; i <= 10; i++) {
		if (a[i] == 'l') count++;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}

// 배열
