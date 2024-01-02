#include <stdio.h>
#include <string.h>

int main(){

    int t, r;
    char s[21];
    char p[161];

    scanf("%d", &t);
    
    for(int i = 0; i < t; i++){
        scanf("%d %s", &r, s);
        int len = strlen(s);
        for(int j = 0; j < len; j++){
            for(int k = 0; k < r; k++){
                p[j*r+k] = s[j];
            }
        }
        p[len*r] = '\0';     // 문자열 마시막에 널문자 추가.
        printf("%s\n", p);   // 개행문자 추가.
    }


    return 0;
}