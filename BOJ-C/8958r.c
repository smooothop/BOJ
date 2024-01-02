#include <stdio.h>
#include <string.h>

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    
    while (test_cases--) {
        char quiz_results[80];
        scanf("%s", quiz_results);
        int score = 0;
        int consecutive_o_count = 0;
        
        for (int i = 0; quiz_results[i] != '\0'; ++i) {
            if (quiz_results[i] == 'O') {
                consecutive_o_count++;
                score += consecutive_o_count;
            } else {
                consecutive_o_count = 0;
            }
        }
        
        printf("%d\n", score);
    }
    
    return 0;
}
