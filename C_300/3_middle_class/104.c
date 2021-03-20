// //메모리를 복사하는 함수 만들기
// #include <stdio.h>
// #include <string.h>

// struct tagM1
// {
//   int x;
//   int y;
//   char buffer[30];
// };

// void* My_memcpy(void* dst, const void* src, unsigned int count);

// int main()
// {
//   struct tagM1 x1, x2;

//   x1.x = 5;
//   x1.y = 10;
//   strcpy(x1.buffer, "memory copy");

//   My_memcpy(&x2, &x1, sizeof(x1));

//   puts(x2.buffer);
// }

// void* My_memcpy(void* dst, const void* src, unsigned int count)
// {
//   void* ret = dst;
//   //void* 크기가 정해지지 않은 상태
//   while(count--)
//   {
//     *(char*)dst = *(char*)src;
//     dst = (char*)dst + 1;
//     src = (char*)src + 1;
//   }
//   return ret;
// }