#include <stdio.h>
#include <string.h>

int atoi(char* arr, int size) {
    int res = 0;
    int i;
    for(i=0;i<size;i++) {
        res = res*10 + (arr[i] - '0');
        // printf("%d\n", res);
    }
    return res;
}

int call(int a, int b, char op) {
    switch(op)
    {
        case '+':
            return a+b;
        case '-':
            return a-b;
        default:
            return 0;
    }
}

int main()
{
    char arr[1001];
    int res=0;
    char stack[1001];
    char op = '+';
    int scnt = 0;
    int i;
    char c;
    scanf("%s", arr);
    for(i=0;i<strlen(arr);i++) {
        if (arr[i] >= '0' && arr[i] <= '9') { // 숫자라면 조건이 참
            // stack[scnt] == arr[i]; // stack[i] 에 제대로 값이 들어가지 않음;
            c = arr[i];
            stack[scnt] = c;
            // printf("%c\n", arr[i]);
            // printf("%c\n", stack[scnt]);
            scnt++;
        } 
        else {
            stack[scnt] = '\0';
            res = call(res, atoi(stack, scnt), op);
            op = arr[i];
            scnt = 0;
        }
    }
    res = call(res, atoi(stack, scnt), op); // 마지막 수까지 계산
    printf("%d\n", res);

    return 0;
}
