// //부분 문자열을 특정 문자로 채우기
// #include <stdio.h>
// #include <string.h>

// char* strnset(char* string, int c, unsigned int count); //기존 함수가 적용이 불가하여 직접 구현

// int main()
// {
// char string[100];

//   puts("문자열을 입력한 후 Enter키를 치세요!");
//   puts("아무 문자도 입력하지 않으면 프로그램은 종료됩니다.");

//   do{
//     gets(string);

//     if(strlen(string) == 0) break;

//     strnset(string, '*', 5);
//     puts(string);
//   }while(1);

//   return 0;
// }

// char* strnset(char* string, int c, unsigned int count)
// {
//   if(strlen(string) <= count)
//   {
//     for(int i=0;i<strlen(string);i++)
//       string[i] = c;
//   }
//   else{
//     for (int j=0;j<count;j++)
//       string[j] = c;
//   }
//   return string;
// }
