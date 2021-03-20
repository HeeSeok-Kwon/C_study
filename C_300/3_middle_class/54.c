// //정수값 출력하기
// #include <stdio.h>
// void var_print(char* format, ...){
//   char buff[1024];
//   va_list arglist;
//   va_start(arglist, format);
//   vsprintf(buff,format,arglist);
//   va_end(arglist);

//   printf("%s",buff);
// }
// int main(void)
// {
//   int i = 100;
//   int j = 1000;
//   int k = 12345;
//   char* str ="A message to display"; //문자열형 상수 -> str 자체는 변화 가능
//   char str2[11] = "i am happy"; //문자열형 변수 -> str2 자체 변화 불가능
//   for(int i=0;i<10;i++)
//     str2[i] = 'a'; //if 1<11 하면 마지막 @, '\0'자리 있어야 함
//   printf("%s\n%s", str, str2);
//   // printf("[%d]\n",i);
//   // printf("[%d]\n",j);
//   // printf("[%d]\n",k);

//   var_print("[%d]\n",i);

//   // printf("[%5d]\n",i);
//   // printf("[%5d]\n",j);
//   // printf("[%5d]\n",k);

  
//   // printf("[%10d]\n",i);
//   // printf("[%10d]\n",j);
//   // printf("[%010d]\n",k);

  
//   // printf("[%-10d]\n",i);
//   // printf("[%-10d]\n",j);
//   // printf("[%-10d]\n",k);

//   return 0;
// }