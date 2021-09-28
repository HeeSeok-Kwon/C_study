#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindrome(char input[100], int start, int end) {
    int i;
    int pal = 0;
    int j = end - start;
    for(i=0;i<(end-start+1)/2;i++, j--) {
        if(input[i] == input[j]) pal++;
    }
    if(pal == (end-start+1)/2) return 1; // 회문
    else return 0; // 회문이 아님
}

int main(void) 
{
    char inputStr[100];
    int strLen;
    int pal = 0;
    int count = 0;
    char temp[100];
    int i,j,k,l;
    int testNum;
    scanf("%d", &testNum); // 테스트 케이스
    scanf("%s", inputStr); // 입력받을 문자열
    for(l=0;l<testNum;l++)
    {
        count = 0;
        strLen = strlen(inputStr); // 문자열 길이
        for(k=3;k<strLen;k++) // 회문을 판단할 글자 수 k
        {
            for(j=0;j<strLen-k+1;j++) // 첫 번째 글자부터 회문 판단
            {
                for(i=j;i<k+j;i++) 
                    temp[i] = inputStr[i];
                temp[i] = '\0';
                if(palindrome(temp+j, 0, k-1)) {
                    printf("%s ", temp+j);
                    count++; // 회문의 갯수
                }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
