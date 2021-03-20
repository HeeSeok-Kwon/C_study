// //문자열을 실수로 변환하기
// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//   char* string1 = "2.1은 1.0보다 큽니다.";
//   char* string2 = "1004.5는 천사.오 입니다.";
//   char* string3 = "2005년도 입니다.";
//   char* string4 = "오늘은 6월 9일입니다.";
//   //char* string4 = "123e-3";
//   double t1, t2, t3, t4;

//   puts(string1);
//   puts(string2);
//   puts(string3);
//   puts(string4);

//   t1 = atof(string1);
//   t2 = atof(string2);
//   t3 = atof(string3);
//   t4 = atof(string4);

//   printf("문자열을 숫자로 변환한 값 : %.1f, %.1f, %.1f, %.1f\n", t1, t2, t3, t4);
//   printf("총 합은 %.2f입니다.\n", t1+t2+t3+t4);

//   return 0;
// }