// 파일 포함 전처리기 #include <> : 시스템 디렉토리 & #include "" : 현재 폴더
//#include <stdio.h>
//#include "temp.h" 
//
//int main()
//{
//	int a = 10, b = 20;
//	printf("%d\n", add(a, b));
//	system("pause");
//	return 0;
//}


// 매크로 전처리기 #define
//#include <stdio.h>
//#define PI 3.1415926535
//
//int main(void) {
//	int r = 10;
//	printf("원의 둘레:%.2f\n", 2 * PI * r);
//	system("pause");
//	return 0;
//}

// 인자를 가지는 매크로 전처리기
//#include <stdio.h>
//#define POW(x) (x * x)
//
//int main(void) {
//	int x = 10;
//	printf("x의 제곱: %d\n", POW(x));
//	system("pause");
//	return 0;
//}

// #define 문법은 소스코드의 양을 줄이는데 도움을 줌
//#include <stdio.h>
//#define ll long long
//#define ld long double
//
//int main(void) {
//	ll a = 987654321000;
//	ld b = 100.5054;
//	printf("%.1f\n", a * b);
//	system("pause");
//	return 0;
//}

// 조건부 컴파일 #ifndef ~ #endif
//#include <stdio.h>
//#include "temp.h"
//#include "temp.h"
//
//int main()
//{
//	system("pause");
//	return 0;
//}

// 파일 분할 컴파일
#include <stdio.h>
#include "temp.h"

int main()
{
	printf("%d\n", add(3, 7));
	system("pause");
	return 0;
}
