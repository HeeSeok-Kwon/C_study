// //함수 포인터를 배열에서 사용하기
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   int (*myfunc[3])(const char*);

//   myfunc[0] = puts;
//   myfunc[1] = strlen; //type warning
//   myfunc[2] = myfunc[1];

//   puts("올챙이가 쑥 ~.~");
//   myfunc[0]("뒷다리가 쭉 ~.~");

//   printf("문자열의 길이 : %ld\n", strlen("aa"));
//   printf("문자열의 길이 : %d\n", myfunc[1]("aa"));
//   printf("문자열의 길이 : %d\n", myfunc[2]("aa"));
  
//   return 0;
// }