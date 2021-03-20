// //문자열을 구분자로 분리하기2
// #include <stdio.h>
// #include <string.h>

// #define TOKEN " "

// int main()
// {
//   char string[100];
//   char* pos; 

//   puts("문자열을 입력한 후 Enter키를 치세요!");

//   gets(string);

//   pos = strpbrk(string, TOKEN); //TOKEN에 해당하는 선두번지를 반환
//   // 결국 첫 번째 문자열은 출력되지 않는다.
//   while(pos != NULL)
//   {
//     puts(pos++);

//     pos = strpbrk(pos, TOKEN);
//   }

//   return 0;
// }