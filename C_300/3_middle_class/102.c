// //메모리 이동하기
// #include <stdio.h>
// #include <string.h>

// char s1[20] = "1234567890";
// char s2[20] = "1234567890";
// //전역변수도 ; 붙임
// int main()
// {
//   puts(s1);
//   memcpy(s1+4, s1+2, 5); //1234xxxxx0 --> 1234345650
//   puts(s1);
  
//   puts(s2);
//   memmove(s2+4, s2+2, 5); //1234345670 --> 뒤에서부터 복사
//   puts(s2);

//   return 0;
// }