// //문자열을 정수로 변환하기 4
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//   char* string = "11000";
//   char* stop;
//   int radix;
//   unsigned long value;

//   radix = 2;

//   value = strtoul(string, &stop, radix);
//   //unsigned long strtoul(const char* string, char** stop, int radix);
//   //string의 마지막 위치가 *stop에 저장 --> 결국 주소값이 포인터 변수에 저장됨
//   printf("%ld 개의 문자가 변환되었습니다.\n", stop-string);
//   printf("2진수 %s를 숫자로 변환하면 %lu입니다.\n", string, value);

//   return 0;
// }