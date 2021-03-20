// //문자열 대/소문자로 구분하여 비교하기
// #include <stdio.h>
// #include <string.h>

// #define SKY "sky"

// int main()
// {
//   char string[100];
//   int ret;

//   printf("영단어 입력 후 Enter키를 치세요!\n");
//   printf("sky를 입력하면 프로그램이 종료됩니다.\n");

//   do
//   {
//     gets(string);
//     ret = strcmp(string,SKY); //문자열 ascii 차이값을 반환
//     //ret = stricmp(string,SKY); -> 여기선 기능 안함
//     if(ret==0){
//       printf("%s == %s, ret = %d\n",string,SKY, ret);
//       break;
//     }
//     else if(ret < 0) printf("%s<%s, ret=%d\n", string,SKY, ret);
//     else printf("%s>%s, ret=%d\n", string,SKY, ret);
//   }while(1);

//   return 0;
// }

