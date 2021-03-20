// //void 형 포인터 사용하기
// #include <stdio.h>

// int main()
// {
//   int i;
//   double d = 3.14;

//   int* pi;
//   double * pd;
//   void* pv;

//   pi = &i;
//   printf("정수 값 i : %d\n",*pi);
//   pd = &d;
//   printf("실수 값 d : %f\n",*pd);
//   //pi=&d;//error 발생
//   pv=&i;
//   printf("정수 값 i : %d\n",*(int*)pv);
//   pv=&d;
//   printf("실수 값 d : %f\n",*(double*)pv);

//   return 0;
// }