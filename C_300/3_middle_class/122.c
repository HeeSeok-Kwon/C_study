// //구조체 사용하기
// #include <stdio.h>
// #include <string.h>

// struct tagAddress {
//   char name[30];
//   char phone[20];
//   char addreess[100];
// };

// int main()
// {
//   struct tagAddress ad[3];
//   int i;

//   for(i=0;i<3;i++)
//   {
//     sprintf(ad[i].name,"홍길동 %d",i);
//     strcpy(ad[i].phone,"02-1234-5678");
//     strcpy(ad[i].addreess,"서울시 양천구 목동아파트 13단지");
//   }
//   for(i=0;i<3;i++)
//   {
//     printf("이름 : %s\n",ad[i].name);
//     printf("전화 : %s\n",ad[i].phone);
//     printf("주소 : %s\n",ad[i].addreess);
//   }

//   return 0;
// }