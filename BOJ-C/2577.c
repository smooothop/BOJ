#include <stdio.h>

int cut_numbers(int sum, int *k){
    int i = 0;
    while(sum > 0){
        k[i++] = sum % 10; //sum을 10으로 나눈 나머지를 구하고 k의 인덱스에 1을 더함.
        sum /= 10;
    }
    return i;
}

int main() {
    int a, b, c;
    int sum;
    int k[10]; // 충분히 큰 배열 크기
    int counts[10] = {0};
    int digit_count;

    scanf("%d %d %d", &a, &b, &c);
    sum = a * b * c;
    digit_count = cut_numbers(sum, k);

    for(int i = 0; i < digit_count; i++){
        counts[k[i]]++; //k[i]의 값에 따른 counts의 인덱스로 이동해 각 숫자가 몇 번 나왔는지 기록.
    }
    
    for(int i = 0; i < 10; i++){
        printf("%d\n", counts[i]);
    }

    return 0;
}
