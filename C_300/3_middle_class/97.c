// //메모리를 블록단위로 할당하기
// #include <stdio.h>
// #include <stdlib.h>
// #include <malloc.h>

// int main()
// {
//   char* pmem;

//   printf("sizeof(int)의 길이는 %d입니다.\n", sizeof(int)); //%ld

//   pmem = calloc(100, sizeof(int));//메모리를 모두 널로 초기화
//   // void* calloc(size_t num, size_t size);
//   if(pmem == NULL) puts("메모리를 할당할 수 없습니다.");
//   else {
//     puts("정수형 변수 100개를 저장할 버퍼가 할당되었습니다.");
//     free(pmem);
//   }
//   return 0;
// }