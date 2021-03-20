// //정수값 입력받기
// #include <stdio.h>
// #include <ctype.h>
// //#include <termios.h>
// int main()
// {
//   int count;
//   int tmp;
//   int total=0;
//   int num;
  
//   for(count=1;count<=3;count++)
//   {
//     printf("%d 번째 정수값을 입력한 후 Enter키를 누르세요\n",count);
//     num = scanf("%d", &tmp);
//     // while (tmp == 32765 || tmp == 32764){
//     //   getchar();
//     //   scanf("%d", &tmp);
//     // }
//     //printf("%c %d", tmp, tmp);
//     while(num == 0) //while(scanf("%d", &tmp)) -> 안먹힘 -> 리눅스에서만 그런가?
//     {
//         getchar();
//         num = scanf("%d", &tmp);
//     }
//     getchar();
//     //fflush(stdin);-> 될 수도 있고 안될 수도 있다. ; 출력 버퍼를 비운다.
//     total += tmp;
//     printf("입력 값 : %d, 총합 = %d\n", tmp, total);
     
//   }
//   printf("읽은 정수의 총 합은 %d입니다.",total);
//   return 0;
// }