// //변수의 범위 이해하기
// #include <stdio.h>

// void print_x(int x);
// void print_gx(void);

// int x=20;//초기화 안하면 default 0
// //int g_x라고 해주는 게 좋음

// int main()
// {
//   int x = 5;
//   printf("x=%d\n",x);

//   print_x(10);
//   print_gx();

//   return 0;
// }
// void print_x(int x){
//   printf("x=%d\n",x);
// }
// void print_gx(void){
//   printf("x=%d\n",x);
// }