// //포인터 배열을 함수에서 사용하기
// #include <stdio.h>

// void print_pxy(int* pxy[2]);

// int main()
// {
//   int x=0, y=0;
//   int* pxy[2];

//   pxy[0] = &x;
//   pxy[1] = &y;

//   *pxy[0] = 5;
//   *pxy[1] = 10;

//   print_pxy(pxy); 
//   return 0;
// }

// void print_pxy(int* pxy[2]){ //main() pxy의 분신
//   printf("pxy[0]=%d\n", *pxy[0]);
//   printf("pxy[1]=%d\n", *pxy[1]);
// }