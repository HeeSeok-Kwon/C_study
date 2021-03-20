// //문자열을 거꾸로 뒤집기
// #include <stdio.h>
// #include <string.h>

// char* strrev(char* string);

// int main()
// {
//   char string[100];

//   puts("영단어를 입력한 후 Enter키를 치세요!");
//   puts("아무 문자도 입력하지 않으면 프로그램은 종료됩니다.");

//   do{
//     gets(string);

//     if(strlen(string) == 0) break;

//     strrev(string);
//     puts(string);
//   }while(1);

//   return 0;
// }

// char* strrev(char* string) //--> 부하를 많이 주는 함수
// {
//   int size = strlen(string);
//   char cstr[size];
//   //문자열 복사
//   for(int i=0;i<size;i++)
//     cstr[i] = string[i];
  
//   //문자열 뒤집기
//   for(int j=0;j<size;j++){
//     char temp = cstr[size-1-j];
//     string[j] = temp; 
//   }
//   return string;
// }


// // char* strrev_1(char* str)
// // {

// //   int startIdx, endIdx;

// //   if(!str || !*str)  return (char *)-1;

// //   startIdx = 0;

// //   endIdx = strlen(str)-1;

// //   while(startIdx<endIdx) {

// //     char tmp = str[startIdx];

// //     str[startIdx] = str[endIdx];

// //     str[endIdx] = tmp;

// //     startIdx ++;

// //     endIdx --;

// //   }
// //   return str;
// // }

// // char* strrev_2(char *str)
// // {
// //   char* endStr;

// //   if(!str || !*str)    return (char *)-1;

// //   endStr = str + strlen(str) - 1;

// //   while(str<endStr) {

// //     char tmp = *str;

// //     *str = *endStr;

// //     *endStr = tmp;

// //     str ++;

// //     endStr --;

// //   }

// //   return str;
// // }
