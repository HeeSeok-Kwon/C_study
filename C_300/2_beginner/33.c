// //중첩 순환문 이해하기
// #include <stdio.h>

// int main()
// {
//   // int i, j;

//   // for(i=1;i<=9;i++)
//   //   for(j=1;j<=9;j++)
//   //     printf("%d*%d=%2d\n",i,j,i*j);
//   //////////////////////
//   // int i;
//   // int j;

//   // for(i=1;i<=9;i++)
//   // {
//   //   for(j=1;j<=9;j++)
//   //   {
//   //     printf("%d*%d=%2d\n",i,j,i*j);
//   //   }
//   // }
//   //////////////////////
//   for(int i=1;i<=9;i++)
//   {
//     if(5==i) continue;
//     printf("%d",i);
//     if(7==i) break;
//   }
  
//   return 0;
// }