// //메모리 할당하기
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <malloc.h>

// #define MEMORY "MEMORY"

// int main()
// {
//   char* pmem;

//   pmem = (char*)malloc(100); //void* malloc(unsigned int size);

//   if(pmem == NULL) puts("메모리를 할당할 수 없습니다."); //메모리 할당되지 않은 경우
//   else {
//     strcpy(pmem, MEMORY);
//     puts(pmem);
//     free(pmem);
//   }
//   return 0;
// }