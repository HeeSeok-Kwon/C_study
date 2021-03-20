// //문자열 중에 일치되지 않는 첫 문자의 위치 구하기
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char* string = "this is a very good !";
//   char* strCharSet = " abcdefghijklmnopqrstuvwxyz";//\0포함X-->띄어쓰기를 인식하지 못함-->띄어쓰기도 포함해야 한다.
//  // char* strCharSet = "is";
//   unsigned int pos;

//   pos = strspn(string, strCharSet);
//   // pos = strcspn(string, strCharSet);
//   //pos = string - strpbrk(string, strCharSet);

//   puts("0         1         2         3");
//   puts("0123456789012345678901234567890");
//   puts(string);
//   puts(strCharSet);

//   printf("%d 위치에서 일치되지 않는 문자를 발견하였습니다.\n", pos);
//   return 0;
// }