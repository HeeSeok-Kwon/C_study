#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
    int i, j, k, p = 0;
    int testNum, keyLimit;
    char temp[10], beforeStr[100], afterStr[100], key[11];
    scanf("%s", temp);
    testNum = atoi(temp);
    scanf("%s", key);
    keyLimit = strlen(key);
    // printf("%d\n", keyLimit);
    for(k = 0;k<testNum;k++) {
        scanf("%s", beforeStr);
        j = strlen(beforeStr);
        if(strlen(beforeStr)%keyLimit != 0){
            for(i=0;i<keyLimit - (j%keyLimit);i++) {
                beforeStr[j + i] = 97 + i; // 문자열 패딩
            }
            beforeStr[j + i] = (int)NULL;
        }
        // printf("%s\n", beforeStr);
        j = 0;
        p = 0;
        for(i = 0;i<strlen(beforeStr);i++) {
            if(j == keyLimit) {
                p = p + keyLimit;
                j = j%keyLimit;
            }
            afterStr[i] = beforeStr[(key[j]-49)+p];
            // printf("%c ",afterStr[i]);
            j++;
        }
        afterStr[i] = (int)NULL;
        printf("%s\n", afterStr);
    }

    return 0;
}
