// //조건 순환문 이해하기 2
// #include <stdio.h>

// int main()
// {
//   int i=1;
//   // int hap=0;

//   // do{
//   //   hap = hap + i;
//   //   i++;
//   // } while(i<=10);

//   // printf("hap=%d", hap);

//   do{
//     if(i==5) {i++;continue;}
//     printf("%d",i);
//     if(i==7) break;
//     i++;
//   }while(i<=10);

//   return 0;
// }