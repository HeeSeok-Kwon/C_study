// //메모리 복사하기
// #include <stdio.h>
// #include <string.h>

// typedef struct tagM1
// {
//   int x;
//   int y;
//   char buffer[30];
// } TagM1;

// int main()
// {
//   //struct tagM1 x1, x2;
//   TagM1 x1, x2;
//   x1.x = 5;
//   x1.y = 10;
//   strcpy(x1.buffer, "memory copy");

//   memcpy(&x2, &x1, sizeof(x1)); 
//   //void* memcpy(void* dest, const void* src, unsigned int count)
//   //printf("%p\n%p\n", &x1, &x2); --> 주소 값 다름
//   puts(x2.buffer);

//   return 0;
// }
