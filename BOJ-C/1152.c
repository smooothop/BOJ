#include <stdio.h>
#include <string.h>

int main() {
    char s[1000001]; // 크기 조정
    int space_count = 0;

    // %*c를 추가하여 개행 문자를 제외
    scanf("%[^\n]%*c", s);

    int i = 0;
    int length = strlen(s); // 반복문 내에서 한 번만 호출하도록 수정
    while (i < length) {
        // 공백인 경우와 연속된 공백을 고려하여 개선
        if (s[i] == ' ') {
            space_count++;
            while (s[i] == ' ') {
                i++;
            }
        } else {
            i++;
        }
    }

    // 문자열 양 끝의 공백이 있는 경우를 고려하여 개선
    if (s[0] == ' ') {
        space_count--;
    }
    if (s[length - 1] == ' ') {
        space_count--;
    }

    printf("%d\n", space_count + 1);

    return 0;
}
