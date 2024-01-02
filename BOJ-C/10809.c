#include <stdio.h>
#include <string.h>

int main(){

    char s[100];
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int n[26];

    scanf("%s", s);
    int len = strlen(s);

    for(int i = 0; i < len; i++){
        for(int j = 0; j < 26; j++){
            if(alphabet[j] == s[i]){
                n  i;
            }   
        }
        
    }

    return 0;
}