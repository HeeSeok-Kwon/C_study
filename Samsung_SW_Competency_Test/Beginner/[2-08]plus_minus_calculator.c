#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char calc[1001];
  char op = '+';
  int res = 0;
  int num = 0;
  int conv = 0;
  scanf("%s", calc);
  int i = 0;
  if(calc[i] == '-') {
    op = calc[i];
    i++;
  }
  for(;i<strlen(calc);i++){
    if(calc[i] == '+' || calc[i] == '-'){
      if(op == '+') {
        res += num;
      }
      else if(op == '-'){
        res -= num;
      }
      op = calc[i];
      num = 0;
      continue;
    }
    conv = calc[i] - '0';
    num = num*10 + conv;
    // printf("%d\n", num);
  }
  if(op == '+') res += num;
  else if(op == '-') res -= num;

  printf("%d\n", res);
}
