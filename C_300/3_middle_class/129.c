// //void형 포인터를 함수에서 사용하기
// #include <stdio.h>
// #include <string.h>

// typedef struct tagPoint {
//   int x;
//   int y;
// }point;

// void My_memset(void* dest, int c, unsigned count);

// int main()
// {
//   point pt = {5,10};
//   char array[10];

//   printf("x, y : %d, %d\n",pt.x,pt.y);

//   My_memset(&pt, 0, sizeof(pt));

//   printf("x, y : %c, %d\n",pt.x,pt.y);//아스키 값 십진수:0, 문자:NULL

//   My_memset(array, 48, sizeof(array));//십진수:48, 문자:'0' 

//   printf("array[0]~array[9] : %c ~ %c\n",array[0],array[9]); 
//   //printf("array[0]~array[9] : %d ~ %d\n",array[0],array[9]); 
//   return 0;
// }

// void My_memset(void* dest, int c, unsigned count)
// {
//   while(count--)
//   {
//     *(char*)dest = c;
//     dest = (char*)dest+1;
//     // *(int*)dest = c; //->segmentation fault
//     // dest = (int*)dest+1;
//   }
// }