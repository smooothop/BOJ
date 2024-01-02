#include <stdio.h>

int main(){

    int t;
    long long a, b, sum = 0;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%lld %lld", &a, &b);
        for(int j = 0; j < b; j++){
            a *= a;
        }
        sum = a%10;
        printf("%lld\n", sum);
    }

    return 0;
}