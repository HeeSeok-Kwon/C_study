// //포인터를 함수에 사용하기
// #include <stdio.h>

// void change_x1(int x1);
// void change_x2(int* x2);

// int main()
// {
//   int x;
//   x=5;
//   printf("함수를 호출하기 전 x 값 : %d\n", x);

//   change_x1(x); //값에 의한 호출
//   printf("change_x1() 함수를 호출한 후의 x값 : %d\n", x);

//   change_x2(&x); //참조에 의한 호출
//   printf("change_x2() 함수를 호출한 후의 x값 : %d\n", x);

//   return 0;
// }

// void change_x1(int x1){
//   x1 =50;
// }
// void change_x2(int* x2){
//   *x2 = 100;
// }