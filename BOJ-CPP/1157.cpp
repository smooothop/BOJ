#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main() {
    char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int alpha_count[26] = {0};
    char word[100];
    int max = 0; 
    int num = 0;
    bool isDuplicate = false; 

    cin >> word;
    for (int i = 0; i < strlen(word); i++) {
        word[i] = toupper(word[i]);
    }
    for (int i = 0; i < strlen(word); i++) {
        for (int j = 0; j < 26; j++) {
            if (word[i] == alphabet[j]) {
                alpha_count[j]++;
            }
        }
    }
    for (int i = 0; i < 26; i++) {
        if (alpha_count[i] > max) {
            max = alpha_count[i];
            num = i;
            isDuplicate = false; 
        } else if (alpha_count[i] == max) {
            isDuplicate = true; 
        }
    }
    if (isDuplicate || max == 0) { 
        cout << "?" << endl;
    } else {
        cout << alphabet[num] << endl; 
    }

    return 0;
}
