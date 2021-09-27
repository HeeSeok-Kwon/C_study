#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int T;
    int N;
    int tmp;
    int reverseN;
    int sum;
    int cnt;
    int start, end;
    int flag = 0;
    int arr[10];
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &N);
        tmp = N;
        reverseN= 0;
        sum = 0;
        while(tmp != 0){
            reverseN = reverseN*10 + tmp%10;
            tmp /= 10;
        }
        sum = N + reverseN;

        cnt = 0;
        tmp = sum;
        while(tmp != 0){
            arr[cnt++] = tmp%10;
            tmp /= 10; 
        }
        start = 0;
        end = cnt - 1;
        flag = 0;

        while(start <= end) {
            if(arr[start] != arr[end]) {
                flag = 1;
                break;
            }
            else {
                start++;
                end--;
            }
        }
        if (flag == 1) printf("no\n");
        else printf("yes\n");
    }
    return 0;
}
