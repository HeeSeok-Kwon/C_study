// //문자열 복사하는 함수 만들기
// #include <stdio.h>
// #include <string.h>
// #define KOREA "abcdefg"

// char* My_strcpy(char* dest, const char* src);
// char* My_strncpy(char* dest, const char* src, unsigned int count);

// int main()
// {
//   char string[100];
//   //My_strcpy(string, KOREA);
//   //My_strcpy(string, NULL);
//   //puts(string);
//   My_strncpy(string, KOREA, 3);
//   puts(string);
//   return 0;
// }
// char* My_strcpy(char* dest, const char* src)
// {
//   char* ret = dest;
//   if(dest == NULL || src == NULL){//if(dest == (int)NULL || src == (int)NULL){
//     if(*dest != (int)NULL) *dest = (int)NULL;
//     return NULL;
//   }

//   do{
//     *dest++ = *src;
//   }while(*src++ != (int)NULL);

//   return ret;
// }

// char* My_strncpy(char* dest, const char* src, unsigned int count){
//   int _count = 0;
//   char* ret = dest;
//   if(dest == NULL || src == NULL){
//     if(*dest != (int)NULL) *dest = (int)NULL;
//     return NULL;
//   }

//   do{
//     *dest++ = *src++;
//   }while(_count++ < count-1);
  
//   return ret;
// }