// //문자열을 대문자로 변환하기
// #include <stdio.h>
// #include <string.h>

// char* strupr(char* string); //리눅스 계열에서 작동 안 함 --> 직접 구현함

// int main()
// {
//   char string[100];

//   puts("문자열을 입력한 후 Enter키를 치세요!");
//   puts("아무 문자도 입력하지 않으면 프로그램은 종료됩니다.");

//   do{
//     gets(string);

//     if(strlen(string) == 0 ) break;

//     strupr(string);
//     puts(string);
//   }while(1);

//   return 0;
// }

// char* strupr(char* string)
// {
//   int size = strlen(string);
//   if(size == 0) return NULL;

//   for(int i=0;i<size;i++)
//   {
//     for(int j=97;j<(97+26);j++)
//     {
//       if(string[i] == j)
//       {
//         string[i] = j-(32);
//         break;
//       }
//     }
//   }
//   return string;
// }