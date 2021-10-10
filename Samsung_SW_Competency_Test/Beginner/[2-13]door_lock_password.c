#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 

int main(void)
{
  char initPw[10];
  char inputPw[20];
  char temp[10];
  int i, j=0,k,count=0;
  int opened = 0; // 0 비밀번호 미포함, 1 비밀번호 포함
  int testNum; // 테스트 케이스
  scanf("%d", &testNum);
  scanf("%s", initPw);
 

  for(i=0;i<testNum;i++)
  {
    scanf("%s", inputPw);
    count = 0;
    for(j=0;j<strlen(inputPw)-3;j++)
    {
      for(k=0;k<4;k++)
      {
        if(inputPw[j+k] == initPw[k])
          count++;
      }
      if(count == 4)
      {
        opened = 1;
        // printf("opened 1 \n");
        break;
      }
      else
      {
        opened = 0;
        count = 0;
        // printf("opened 0 \n");
      }
    }
    printf("%d\n",opened);
  }
}
