// //무조건 분기문 이해하기
// #include <stdio.h>

// int main()
// {
//   int i;
//   int j;

//   for(i=1;i<=100;i++)
//   {
//     for(j=1;j<=9;j++)
//     {
//       printf("%d*%d=%2d\n",i,j,i*j);
//       if(i==9 && j==9)goto ku_ku_end;
//     }
//   }
//   ku_ku_end:;
//   return 0;
// }
// //여러 개 중첩된 문장을 한 번에 빠져나가고자 할 때 유용