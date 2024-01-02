#include <stdio.h>

int main() {
    char line[101]; // 100글자 + 널 문자('\0') 저장 공간

    while (fgets(line, sizeof(line), stdin)) {
        // EOF에 도달하면 반복을 종료
        if (feof(stdin)) {
            break;
        }
        printf("%s", line);
    }

    return 0;
}
