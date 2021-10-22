#include <stdio.h>

int main() 
{
    int T;
    int N;
    int arr[10000]; // 입력 결과
    int res[10001]; // 각 징검다리에서 최솟값
    int min = 0;
    int i;
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &N);
        for(i=0;i<N;i++) {
            scanf("%d", &arr[i]);
            res[i] = arr[i];
        }
        int i =0 ;
        while(i < N + 1) {
            if(i == N) { // 도착 지점의 최솟값을 구함
                if(res[i-3] < res[i-2]) {
                    if(res[i-3] < res[i-1])
                        res[i] = res[i-3];
                    else
                        res[i] = res[i-1];
                }
                else {
                    if(res[i-2] < res[i-1])
                        res[i] = res[i-2];
                    else
                        res[i] = res[i-1];
                }
            }
            // 각 징검다리의 최솟값을 구한다
            else if(i > 2) {
                if(res[i-3] < res[i-2]) {
                    if(res[i-3] < res[i-1])
                        res[i] = res[i-3] + arr[i]; // 점프 3이 최솟값일 때
                    else
                        res[i] = res[i-1] + arr[i]; // 점프 1이 최솟값일 때
                }
                else {
                    if(res[i-2] < res[i-1])
                        res[i] = res[i-2] + arr[i]; // 점프 2가 최솟값일 때
                    else
                        res[i] = res[i-1] + arr[i]; // 점프 1이 최솟값일 때
                }
            }
            i++;
        }
        printf("%d\n", res[N]);
    }
    return 0;
}
