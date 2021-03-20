// //문자열을 정수로 변환하기 3
// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//   char* string = "0xFF";
//   char* stop;
//   int radix;
//   long value;

//   radix = 16; //16진수로 구성된 문자열을 변환하기 위해 16으로 설정
//   //radix = 2; //"0011"
//   //radix = 8; //"011"
//   value = strtol(string, &stop, radix); 
//   // long strtol(const char* string, char** stop, int radix);
//   // stop의 시작위치 - string의 시작위치
//   printf("%ld 개의 문자가 변환되었습니다.\n", stop-string); //%d --> 결과는 나옴
//   printf("16진수 %s를 숫자로 변화하면 %ld 입니다.\n", string, value);

//   return 0;
// }