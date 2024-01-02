#include <stdio.h>

int main() {
    // 숫자의 개수 N 입력
    int N;
    scanf("%d", &N);

    // N개의 숫자를 공백 없이 입력받아 합산
    char digit;
    int sum = 0;
    for (int i = 0; i < N; ++i) {
        scanf(" %c", &digit);  // 공백 없이 숫자를 한 글자씩 입력
        sum += (digit - '0');  // 문자를 숫자로 변환하여 더함
    }

    // 결과 출력
    printf("%d\n", sum);

    return 0;
}
