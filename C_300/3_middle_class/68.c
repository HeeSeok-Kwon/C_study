// //문자열을 구분자로 분리하기
// #include <stdio.h>
// #include <string.h>

// #define TOKEN " "

// int main()
// {
//   char string[100];
//   char* token;

//   puts("문자열을 입력한 후 Enter키를 치세요!");

//   gets(string);

//   token = strtok(string, TOKEN);

//   while(token != NULL)
//   {
//     puts(token);
//     token = strtok(NULL, TOKEN);
//   }
//   return 0;
// }