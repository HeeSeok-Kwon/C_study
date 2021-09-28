#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int range(int i, int j, char** board, int num) { //범위 체크
    if(i < 0 || j < 0 || i >= num || j >= num) {
        return 0;
    }
    return 1;
}

int matrix(char** board, int num) {
    int i, j;
    int remainder = 0;
    for(i=0;i<num;i++) {
        for(j=0;j<num;j++) {
            switch(board[i][j]) // break 안써야 범위 커버
            {
                case 'C':
                    if(range(i-3,j,board, num) == 1 && board[i-3][j] == '0') board[i-3][j] = '1';
                    if(range(i,j-3,board, num) == 1 && board[i][j-3] == '0') board[i][j-3] = '1';
                    if(range(i+3,j,board, num) == 1 && board[i+3][j] == '0') board[i+3][j] = '1';
                    if(range(i,j+3,board, num) == 1 && board[i][j+3] == '0') board[i][j+3] = '1';
                case 'B':
                    if(range(i-2,j,board, num) == 1 && board[i-2][j] == '0') board[i-2][j] = '1';
                    if(range(i,j-2,board, num) == 1 && board[i][j-2] == '0') board[i][j-2] = '1';
                    if(range(i+2,j,board, num) == 1 && board[i+2][j] == '0') board[i+2][j] = '1';
                    if(range(i,j+2,board, num) == 1 && board[i][j+2] == '0') board[i][j+2] = '1';
                case 'A':
                    if(range(i-1,j,board, num) == 1 && board[i-1][j] == '0') board[i-1][j] = '1';
                    if(range(i,j-1,board, num) == 1 && board[i][j-1] == '0') board[i][j-1] = '1';
                    if(range(i+1,j,board, num) == 1 && board[i+1][j] == '0') board[i+1][j] = '1';
                    if(range(i,j+1,board, num) == 1 && board[i][j+1] == '0') board[i][j+1] = '1';
            }
        }
    }
    for(i=0;i<num;i++) {
        for(j=0;j<num;j++) {
            if(board[i][j] == '0') remainder++;
        }
    }
    return remainder;
}

int main(void)
{
    char tempNum[50],temp[100];
    char** arrNum; // 2차원 배열
    char* cutStr[3]; 
    int num, size[3]; // 2차원 배열 크기, A, B, C형 폭탄의 수
    int pt[3][8] = {0,}, ptx, pty; // 좌표 변수
    int i,j,k;
    int remainder, testNum; // 남은 지역수, 테스트 케이스
    
    scanf("%d", &testNum); // 테스트 케이스 입력
    for(k=0;k<testNum;k++) {
        scanf("%d", &num); // 배열 크기 입력
        getchar(); // \n 
        scanf("%[^\n]", temp);
        arrNum = (char**)malloc(sizeof(char*)*num); // 배열 메모리 할당
        for(i=0;i<num;i++) arrNum[i] = (char*)malloc(sizeof(char)*num);

        for(i=0;i<num;i++)
            for(j=0;j<num;j++)
                arrNum[i][j] = '0';
        
        // for(i=0;i<3;i++) cutStr[i] = (char*)malloc(sizeof(char)*61);
        
        cutStr[0] = strtok(temp, ","); // A형
        cutStr[1] = strtok(NULL, ","); // B형 -- 이전에 찾은 구분자 뒤에서 다시 구분자를 탐색
        cutStr[2] = strtok(NULL, ","); // C형
        // printf("%s    %s    %s\n", cutStr[0], cutStr[1], cutStr[2]);
        for(i=0;i<3;i++) {
            size[i] = strlen(cutStr[i]);
            // printf("%d\n", size[i]);
        } // 홀수일 수밖에 없다.
        for(i=0;i<3;i++) {
            pt[i][0] = atoi(strtok(cutStr[i], " "));
            printf("%d ", pt[i][0]);
            for(j=1;j<=(size[i]-1)/2;j++) {
                pt[i][j] = atoi(strtok(NULL," "));
                printf("%d ", pt[i][j]);
            }
            printf("\n"); 
        }

        for(i=0;i<3;i++) {
            for(j=0;j<=(size[i]-1)/2;j++) {
                if( i == 0) {
                    if((i+j)%2 == 0) ptx = pt[i][j];
                    else {
                        pty = pt[i][j]; 
                        arrNum[ptx][pty] = 'A';
                    }
                }
                else if( i == 1) {
                    if((i+j)%2 == 0) {
                        pty = pt[i][j];
                        arrNum[ptx][pty] = 'B';
                    }
                    else {
                        ptx = pt[i][j]; 
                    }
                }
                else {
                    if((i+j)%2 == 0) ptx = pt[i][j];
                    else {
                        pty = pt[i][j]; 
                        arrNum[ptx][pty] = 'C';
                    }
                }
            }
        }
      
        remainder = matrix(arrNum, num);
        for(i=0;i<num;i++){
            for(j=0;j<num;j++){
                printf("%c ", arrNum[i][j]);
            }
            printf("\n");
        }
        printf("%d\n", remainder);

        for(i=0;i<num;i++) free(arrNum[i]);
        free(arrNum);
    }

    return 0;
}
