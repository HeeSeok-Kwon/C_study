#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[20];
	int score;
} Student;
int main()
{
	// 파일을 열어 문자열 쓰기
	/*char s[20] = "Hello World";
	FILE* fp;
	fp = fopen("temp.txt","w");
	fprintf(fp, "%s\n", s);
	fclose(fp);*/

	// 간단한 학생 정보 시스템 만들기
	int n, sum = 0;
	FILE* fp;
	fp = fopen("input.txt", "r");
	fscanf(fp, "%d", &n);
	Student* students = (Student*)malloc(sizeof(Student)*n);
	for (int i = 0; i < n; i++) {
		fscanf(fp, "%s %d", &(students[i].name), &(students[i].score));
		//printf("이름: %s, 성적: %d\n", (students + i)->name, (students + i)->score);
	}
	// 성적 평균 구하고 메모리 할당 해제
	for (int i = 0; i < n; i++) {
		sum += (students + i)->score;
	}
	free(students);
	fclose(fp);
	printf("점수 평균: %.2f\n", (double)(sum / n));
	system("pause");
	return 0;
}

// Window local 디버거 클릭 --> input.txt가 solution directory 바로 아래에 있어야 함(sln과 같은 위치)
// Solution 우클릭 & 빌드 --> input.txt가 Debuf directory 바로 아래에 있어야 함(실행파일과 같은 위치)
// 위 두 문제는 파일 경로 설정만 잘 해주면 해결될 것
