// //메모리 비교하기
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char s1[100]="123";
//   char s2[100]="123";

//   strcpy(&s1[4], "abc"); //\0 전까지만 비교
//   strcpy(&s2[4], "efg");

//   if(strcmp(s1, s2) == 0)
//     puts("strcmp : 버퍼의 값이 일치합니다.");
  
//   if(memcmp(s1, s2, 7) == 0) puts("memcmp : 버퍼의 값이 일치합니다.");
//   else puts("memcmp : 버퍼의 값이 일치하지 않습니다.");
//   //int memcmp(const void* buf1, const void* buf2, unsigned int count)
//   //memcmp는 비교하려는 버퍼에 널 값이 있는 경우에도 지정된 길이만큼 모두 비교
//   return 0;
// }