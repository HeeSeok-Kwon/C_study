#include <stdio.h>
#include <stdlib.h>

// 구조체 정의와 선언
typedef struct Student {
	char studentId[10];
	char name[10];
	int grade;
	char major[100];
} Student; // s = { "202107167","Simon",4,"Computer Science" }; 
   // 오직 하나의 변수만 사용할 때, 전역변수로 사용할 때
   // 선언과 동시에 초기화

// 익명 구조체
//typedef struct {
//	char studentId[10];
//	char name[10];
//	int grade;
//	char major[100];
//} Student;

int main()
{
	// 구조체 변수의 선언과 접근
	//struct Student s; // 구조체 변수 선언
	//strcpy(s.studentId, "202107167"); // 구조체 변수에 접근
	//strcpy(s.name, "Simon");
	//s.grade = 4;
	//strcpy(s.major, "Computer Science");
	
	// 구조체 변수 한 번에 초기화
	// struct Student s = { "202107167","Simon",4,"Computer Science" };

	// typedef
	//Student s = { "202107167","Simon",4,"Computer Science" };

	// 학생 구조체 만들어서 활용하기
	/*printf("학번:%s\n", s.studentId);
	printf("이름:%s\n", s.name);
	printf("학년:%d\n", s.grade);
	printf("학과:%s\n", s.major);
	system("pause");*/

	// 구조체가 포인터 변수로 사용되는 경우 내부 변수 접근
	Student* s = malloc(sizeof(Student));
	strcpy(s->studentId, "202107167"); // 구조체 변수에 접근
	strcpy(s->name, "Simon");
	s->grade = 4;
	strcpy(s->major, "Computer Science");

	// 출력
	printf("학번:%s\n", s->studentId);
	printf("이름:%s\n", s->name);
	printf("학년:%d\n", s->grade);
	printf("학과:%s\n", s->major);
	free(s);
	system("pause");

	return 0;
}
// 구조체

// 전역변수 Test
//#include <stdio.h>
//
//// 구조체 정의와 선언
//struct Student {
//	char studentId[10];
//	char name[10];
//	int grade;
//	char major[100];
//} s; 
//
//int main()
//{
//	
//	// 전역변수는 한 번에 초기화가 안됨
//	strcpy(s.studentId, "202107167");
//	strcpy(s.name, "Simon");
//	s.grade = 4;
//	strcpy(s.major, "Computer Science");
//	strcpy(s.studentId, "*********");
//	printf("%s %s %d %s\n", s.studentId, s.name, s.grade, s.major);
//	system("pause");
//	return 0;
//}
