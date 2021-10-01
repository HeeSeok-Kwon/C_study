#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int checkArea(char* areacode) {
    int res = 0;
    for(int i=0;i<strlen(areacode);i++){
        res += (areacode[i] - '0');
    }
    if(res == 1) return 1;
    return 0;
}

int checkBirth(char* birth) {
    int res = atoi(birth);
    // printf("%d\n", res);
    // 날짜 입력 유효성 검증 코드 추가 
    if(res >= 19000101 && res <= 20141231) return 1; 
    return 0;
}

int checkSum(char chk, char* cid) {
    int r = 17;
    int res = 0;
    char buf;
    for(int i=0;i<strlen(cid)-1;i++) {
        res += (cid[i] - '0')*(int)pow(2, r--);
    }
    // printf("checksum1: %d\n", res);
    res = res%11;
    // printf("checksum2: %d\n", res);
    if(res == 10) buf = 'X';
    else buf = res + '0';

    if(buf == chk) return 1;
    return 0;
}

int checkSex(char* sex) {
    int res = 0;
    for(int i=0;i<3;i++) res += (sex[i]-'0');
    if(res != 0) return 1;
    return 0;
}

int main(void)
{
    int n; // 테스트 케이스 숫자
    char cid[19]; // 중국인 ID
    char area[7];
    char birth[9];
    char sex[4];
    int mf;
    int chk;
    int i;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%s", cid);
        for(i=0;i<6;i++) area[i] = cid[i];
        area[6] = '\0';
        for(i=0;i<8;i++) birth[i] = cid[i+6];
        birth[8] = '\0';
        for(i=0;i<3;i++) sex[i] = cid[i+14];
        sex[3] = '\0';
        // printf("area: %s\n", area);
        // printf("birth: %s\n", birth);
        // printf("sex: %s\n", sex);
        chk = cid[17];

        if(!checkArea(area)) {
            printf("Invalid\n");
            continue;
        }
        if(!checkBirth(birth)) {
            printf("Invalid\n");
            continue;
        }
        if(!checkSum(chk, cid)) {
            printf("Invalid\n");
            continue;
        }
        if(!checkSex(sex)) {
            printf("Invalid\n");
            continue;
        } 
        else {
            mf = atoi(sex);
            printf("mf: %d\n", mf);
            if(mf%2 == 0) 
                printf("Female\n");
            else 
                printf("Male\n");
            continue;
        }


    }
    return 0;
}
