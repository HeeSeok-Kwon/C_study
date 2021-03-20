// //문자 입력받기
// #include <stdio.h>
// #include <termio.h>
// //#define ENTER 13
// int getch(void);

// int main()
// {
//   int ch;
//   printf("아스키 코드로 변환할 키를 누르세요...\n");
//   printf("Enter 키를 누르면 프로그램은 종료됩니다.\n");

//   do
//   {
//     ch = getch();
//     printf("문자 : (%c), 아스키 코드 = (%d)\n", ch, ch);
//   }while(ch != '\n');

//   return 0;
// }

// int getch(void)
// {
//     int ch;

//     struct termios old;
//     struct termios new;

//     tcgetattr(0, &old);

//     new = old;
//     new.c_lflag &= ~(ICANON|ECHO);
//     new.c_cc[VMIN] = 1;
//     new.c_cc[VTIME] = 0;

//     tcsetattr(0, TCSAFLUSH, &new);
//     ch = getchar();
//     tcsetattr(0, TCSAFLUSH, &old);

//     return ch;
// }