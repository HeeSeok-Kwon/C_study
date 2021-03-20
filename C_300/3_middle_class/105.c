// //메모리를 이동하는 함수 만들기
// #include <stdio.h>
// #include <string.h>

// char s[20] = "1234567890";

// void* My_memmove(void* dst, const void* src, unsigned int count);

// int main()
// {
//   puts(s);
//   //My_memmove(s+4, s+2, 6);
//   My_memmove(s+7, s, 6);
//   puts(s);

//   return 0;
// }

// void* My_memmove(void* dst, const void* src, unsigned int count)
// {
//   void* ret = dst;

//   if(dst <= src || (char*)dst >= ((char*)src+count)) //영역이 겹치는지 검사
//   {
//     while(count--)
//     {
//       *(char*)dst = *(char*)src;
//       dst = (char*)dst + 1;
//       src = (char*)src + 1;
//     }
//   }
//   else{
//     dst = (char*)dst + count - 1;
//     src = (char*)src + count - 1;

//     while(count--)
//     {
//       *(char*)dst = *(char*)src;
//       dst = (char*)dst - 1;
//       src = (char*)src - 1;
//     }
//   }

//   return ret;
// }
