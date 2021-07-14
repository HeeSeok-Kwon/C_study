#include <stdio.h>

// 함수의 이름이 포인터를 갖는다.
void function() {
	printf("It's my function.");
}

// 매개변수 및 반환 자료형이 없는 함수포인터
void myFunction() {
	printf("It's my function.\n");
}

void yourFunction() {
	printf("It's your function.\n");
}

// 매개변수 및 반환 자료형이 있는 함수포인터
int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}

// 함수 포인터를 반환하여 사용하기
int (*process(char* a))(int, int) {
	printf("%s\n", a);
	return add;
}

int main()
{
	// 함수의 이름이 포인터를 갖는다.
	/*printf("%d\n", function);
	system("pause");*/

	// 매개변수 및 반환 자료형이 없는 함수포인터
	/*void(*fp)() = myFunction;
	fp();
	fp = yourFunction;
	fp();
	system("pause");*/

	// 매개변수 및 반환 자료형이 있는 함수포인터
	/*int(*fp)(int, int) = add;
	printf("%d\n", fp(10, 3));
	fp = sub;
	printf("%d\n", fp(10, 3));
	system("pause");*/

	// 함수 포인터를 반환하여 사용하기
	printf("%d\n", process("10과 20을 더해보겠습니다.")(10,20));
	system("pause");
	return 0;
}
// 함수 포인터
