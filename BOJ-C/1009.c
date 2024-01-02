#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        long long a, b;
        scanf("%lld %lld", &a, &b);

        long long result = 1;
        for(int j = 0; j < b; j++) {
            result = (result * a) % 10;
        }   // a를 항상 10으로 나눠서 오버플로우 방지

        if(result == 0) {   //결과가 0이면 10번 컴퓨터가 처리
            result = 10;
        }

        printf("%lld\n", result);
    }

    return 0;
}
