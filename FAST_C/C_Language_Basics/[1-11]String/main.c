#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	// 남은 메모리 공간에 문자열 저장, 그 주소를 a가 저장함
	// 문자열 리터럴(일종의 상수) : 읽기 전용
	/*char* a = "Hello World";
	printf("%s\n", a);
	system("pause");*/

	// 문자열과 포인터
	/*char* a = "Hello World";
	printf("%c\n", a[1]);
	printf("%c\n", a[4]);
	printf("%c\n", a[8]);
	system("pause");*/

	// 문자열 입출력 함수
	//char a[100];
	//gets(a); // 공백까지 포함하여 한 줄을 입력받음
	//printf("%s\n", a);
	//system("pause");

	// gets_s
	/*char a[100];
	gets_s(a, sizeof(a));
	printf("%s\n", a);
	system("pause");*/

	// strlne
	//char a[20] = "Simon";
	//printf("문자열의 길이: %d\n", strlen(a));
	//system("pause");

	// strcmp
	//char a[20] = "Dongbea Han";
	//char b[20] = "HoJung Seok";
	//printf("두 배열의 사전 순 비교: %d\n", strcmp(a, b));
	//system("pause");

	// strcpy
	/*char a[20] = "My Name";
	char b[20] = "Simon";
	strcpy(a, b);
	printf("복사된 문자열: %s\n", a);
	system("pause");*/

	// strcat
	//char a[30] = "My Name is "; // a 배열 크기 더 늘려줘야 함 20 --> 30
	//char b[20] = "Simon";
	//strcat(a, b);
	//printf("합쳐진 결과 문자열: %s\n", a);
	//system("pause");

	// strstr
	char a[20] = "I like you";
	char b[20] = "like";
	printf("찾은 문자열: %s\n", strstr(a, b)); // 주소값 자체를 반환, 찾은 문자열 이후 모든 문자열 출력
	system("pause");
	return 0;
}
