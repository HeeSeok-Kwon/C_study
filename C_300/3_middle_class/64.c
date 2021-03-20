// //문자열 검색하기
// #include <stdio.h>
// #include <string.h>

// #define SKY "sky"

// int main()
// {
//   char string[100];
//   char* ret;

//   puts("문자열을 입력한 후 Enter키를 치세요!");
//   puts("문자열 중에 sky가 포함되어 있으면, 프로그램은 종료됩니다.");

//   do{
//     gets(string);

//     //ret = strstr(string, SKY);
//     ret = strstr(string, "a"); // 그냥 a error
//     if(ret == NULL)
//       puts("문자열 중에 sky가 없습니다.");
//     else 
//     {
//       printf("%ld 위치에서 처음 sky문자열을 찾았습니다.", ret-string);
//       //ret : 메모리 주소, string : 메모리 주소
//       break;
//     }
//   }while(1);
//   return 0;
// }