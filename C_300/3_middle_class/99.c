// //메모리 재할당하기
// #include <stdio.h>
// #include <stdlib.h>
// #include <malloc.h>

// int main()
// {
//   char* pmem = NULL;
//   pmem = malloc(100);
//   //pmem = calloc(100, 4);
//   if(pmem == NULL)
//     puts("메모리를 할당할 수 없습니다.");
//   else {
//     printf("할당된 메모리 길이는 %ld바이트입니다.\n", malloc_usable_size(pmem) ); 
//     //_msize(pmem) --> compile extenstion, 104byte??
//     pmem = realloc(pmem, 200);
//     //pmem = (char*)_expand(200, 4); --> 기능 못 함
//     if(pmem == NULL)
//       puts("메모리를 재할당할 수 없습니다.");
//     else 
//       printf("재할당된 메모리 길이는 %lu바이트입니다.\n", malloc_usable_size(pmem)); //_msize(pmem)
//     free(pmem);
//   }
//   return 0;
// }