#include <stdio.h>
#include <string.h>

int Max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int T;
    char arr[10001];
    int len;
    int cnt;
    int max;
    int flag;
    int k, i;
    char check[4] = "RGB";
    scanf("%d", &T);
    while(T--) {
        scanf("%s", arr);
        len = strlen(arr);
        cnt = 0;
        max = 0;
        flag = 0;

        for(k=0;k<3;k++){
            for(i=0;i<len;i++){
                if(arr[i] == check[k]) {
                    cnt++;
                    flag = 1;
                } 
                else {
                    if(flag == 1) {
                        flag = 0;
                        max = Max(max, cnt);
                        cnt = 0;
                    }
                }
            }
            max = Max(max, cnt);
            cnt = 0;
            flag = 0;
        }
        printf("%d\n", len-max);
    }
    return 0;
}
