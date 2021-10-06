#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int inputDecimal, result = 0;
    int binaryNum[30];
    int i, j, k;
    int testNum; // 테스트 케이스 수
    char str[50];

    scanf("%d", &testNum);
    for(k=0;k<testNum;k++)
    {
        scanf("%s", str);
        inputDecimal = atoi(str);
        // printf("inputDecimal:%d\n", inputDecimal);
        // 2진수로 변환 --> 거꾸로 되어 있다.
        for(i=0;inputDecimal>0;i++) {
            binaryNum[i] = inputDecimal%2;
            inputDecimal = inputDecimal/2;
        }

        // for(j=i-1;j>=0;j--) {
        //     printf("%d",binaryNum[j]);
        // }
        // printf("\n");

        // 1의 보수
        for(j=i-1;j>=0;j--) {
            if(binaryNum[j] == 1) binaryNum[j] = 0;
            else                  binaryNum[j] = 1;
            // printf("%d", binaryNum[j]);
        }
        // printf("\n");

        // for(j=0;j<i;j++) {
        //     printf("%d",binaryNum[j]);
        // }
        // printf("\n");

        // 10진수로 변환
        for(j=0;j<i;j++) {
            result += binaryNum[j]*pow(2.0,(double)i-j-1);
        }
        printf("%d\n", result);
        result = 0;
    }

    return 0;
}
