// //NULL문자 이해하기
// #include <stdio.h>

// int length(const char* pstr);

// int main()
// {
//   int len = length("abcde");
//   printf("길이 = %d",len);

//   return 0;
// }

// int length(const char* pstr)
// {
//   int len=0;

//   while(*pstr != (const char)NULL) //comparison between pointer and integer ('int' and 'void *') 
//   //const char or int 로 type casting
//   {
//     pstr++;
//     len++;
//   }

//   return len;
// }
