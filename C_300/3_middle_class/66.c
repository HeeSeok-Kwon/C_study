// //문자열 중에 일치되는 첫 문자의 위치 구하기
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   //char* string = "This is a string $$$";
//   char string[100];
//   //scanf("%s", string);
//   gets(string);
//   //char* strCharSet;// = "~!@#$%^&*()_+-={}[]:;'<>./?";
//   char strCharSet[100];
//   gets(strCharSet);
//   unsigned int pos;

//   pos = strcspn(string, strCharSet);//const char*를 인수로 받음

//   puts("0   1   2   3");
//   puts("0123456789012345678901234567890");
//   puts(string);
//   puts(strCharSet);

//   printf("%d 위치에서 일치되는 첫 문자를 발견하였습니다.\n", pos);

//   return 0;
// }