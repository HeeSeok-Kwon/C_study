#include <stdio.h>
// ##### 전역변수 #####
//int a = 5;

//void changeValue() {
//	a = 10;
//}
// ##### 전역변수 #####
// ####################
// ##### 정적변수 #####
//void process() {
//	static int a = 5; // 이미 메모리에 올라간 후에는 무시
//	a = a + 1;
//	printf("%d\n", a);
//}
// ##### 정적변수 #####
// ####################
// ##### 값에 의한 전달 방식 #####
//void add(int a, int b) {
//	a = a + b;
//}
// ##### 값에 의한 전달 방식 #####
// ###############################
// ##### 참조에 의한 전달 방식 #####
void add(int* a) {
	*a = (*a) + 10;
}
// ##### 참조에 의한 전달 방식 #####
int main()
{
	// 전역변수
	/*printf("%d\n", a);
	changeValue();
	printf("%d\n", a);
	system("pause");*/

	// 지역변수
	//int a = 7;
	//if (1) {
	//	//int a = 5;
	//	a = 5;
	//}
	//printf("%d\n", a);
	//system("pause");

	// 정적변수
	/*process();
	process();
	process();
	system("pause");*/

	// 레지스터 변수
	/*register int a = 10, i;
	for (i = 0; i < a; i++) {
		printf("%d ", i);
	}
	system("pause");*/

	// 값에 의한 전달 방식
	/*int a = 7;
	add(a, 10);
	printf("%d\n", a);
	system("pause");*/

	// 참조에 의한 전달 방식
	int a = 7;
	add(&a);
	printf("%d\n", a);
	system("pause");
	return 0;
}
// 컴퓨터가 변수를 처리하는 방법
