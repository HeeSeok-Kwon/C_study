#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int n = 0;
    char key[11], beforeStr[100], afterStr[100]; // key의 최대길이 11 --> 10까지 고려
    int length = 0;
    scanf("%d", &n);
    scanf("%s", key);
    int keylen = strlen(key);
    while(n--) {
        int loop = 0;
        scanf("%s", beforeStr);
        length = strlen(beforeStr);
        // 패딩
        if (length % keylen != 0) {
            int padding = 97;
            if (keylen >= 11) keylen -= 1; // 10이 들어갈 경우 고려
            loop = length+keylen-(length % keylen);
            for(int i=length;i<loop;i++){
                beforeStr[i] = padding++;
            }
        } 
        // 문자열 치환 및 출력
        for(int i=0;i<loop;i++){
            int idx = key[i%keylen] - '0';
            if (i >= keylen) idx += keylen;
            afterStr[i] = beforeStr[idx-1];
            printf("%c", afterStr[i]);
        }
        printf("\n");
    }
    return 0;
}
