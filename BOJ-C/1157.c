#include <stdio.h>
#include <string.h>

int main() {
    char s[10000000];
    scanf("%s", s);
    
    
    char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
                    'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
                    'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    for (int i = 0; i < strlen(s); i++) {
        for (int j = 0; j < 26; j++) {
            if (s[i] == alpha[j] || s[i] == alpha[j] + 32) {
                
            }
        }
    }

    // 이후 count 배열의 내용을 활용할 수 있습니다.

    return 0;
}
