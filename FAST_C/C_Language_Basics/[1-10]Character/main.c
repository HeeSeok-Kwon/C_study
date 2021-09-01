#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 아스키 코드
	/*char a = 65;
	printf("%c\n", a);
	system("pause");*/

	// 문자 입출력 함수
	/*char a = getchar();
	printf("%c\n", a);
	system("pause");*/

	// 문자와 버퍼
	// 입력 버퍼로 인해 흔히 발생하는 오류
	//int a;
	//char c;
	//scanf("%d", &a); // 입력버퍼에 공백이 남아있다.
	//printf("%d\n", a);
	//scanf("%c\n", &c);
	//printf("%c\n", c); // Enter를 누르면 공백출력하고 프로그램 종료
	//system("apuse");

	// 남아 있는 입력 버퍼를 항상 지울 수 있습니다.
	int a; char c;
	scanf("%d", &a);
	printf("%d\n", a);
	int temp = 0;
	// 한 자씩 받아서 파일의 끝이거나 개행 문자를 만나면 입력을 멈추므로 항상 입력 버퍼를 비움
	while((temp = getchar()) != EOF && temp != '\n') {} // 입력 버퍼에 있는 공백이 들어감
	scanf("%c", &c);
	printf("%c\n", c);
	system("pause");
	return 0;
}
