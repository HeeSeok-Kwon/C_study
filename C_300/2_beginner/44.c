// //공용체 이해하기
// #include <stdio.h>

// union tagVariant{
//   int i;
//   float d;
// };
// //변수가 사용하는 메모리 공간이 중첩
// int main()
// {
//   union tagVariant V;
  
//   V.i = 0;
//   V.d = 5.5;

//   printf("V.i = %d\n", V.i);
//   printf("V.d = %f\n", V.d);

//   return 0;
// }