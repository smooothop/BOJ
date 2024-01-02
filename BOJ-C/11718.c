#include <stdio.h>

int main() {
    char line[101]; // 100글자 + 널 문자('\0') 저장 공간

    while(1){
        scanf("%[^\n]s", line);
        printf("%s", line);
    }

    return 0;
}
