// #include <stdio.h>

// int count(char* str);

// int main()
// {
//   char string[100];
//   char* ret;
//   //int ret;
//   printf("Input String : ");
//   //ret = gets_s(string, sizeof(string)); -> 여기선 작동을 안 함
//   ret = gets(string); //gets 반환값이 char* 즉 주소인데 int??
//   //incompatible integer to pointer conversion assigning to 'char *' from 'int'

//   if(ret != NULL)
//   {
//     printf("문자 'a'의 갯수는 %d개입니다.", count(string));
//     puts(string);
//     printf("%s",string)
//   }

//   return 0;
// }

// int count(char* str)
// {
//   int cnt = 0;
  
//   while(*str != (int)NULL)
//     if(*str++ == 'a')cnt++;
  
//   return cnt;
// }