// //문자열을 특정 문자열로 채우기
// #include <stdio.h>
// #include <string.h>
// char* strset(char* string, char c);
// //char* strset(char* string, int c);
// int main()
// {
//   char string[100];

//   puts("문자열을 입력한 후, Enter키를 치세요!");
//   puts("아무 문자도 입력하지 않으면 프로그램은 종료됩니다.");

//   do{
//     gets(string, 100);

//     if(strlen(string) == 0) break;

//     strset(string, string[0]); //여기선 인식하지 못해서 만들어줌
//     puts(string);
//   }while(1);

//   return 0;
// }

// char* strset(char* string, char c)
// {
//   int length = strlen(string);
//   for(int i = 0; i< length;i++)
//   {
//     string[i] = c;
//   }
//   return string;
// }

// // char* strset(char* string, int c)
// // {
// //   int i = 0;
// //   while(string[i] != (int)NULL)
// //   {
// //     string[i] = c;
// //     i++;
// //   }
// //   return string;
// // }