#include <stdio.h>

int main(){

    int numbers[8];
    int k = 0;

    for(int i = 0; i < 8; i++){
        scanf("%d", &numbers[i]);
    }
    for(int i = 0; i < 7; i++){
        if(numbers[i] == numbers[i+1]-1){
            k++;
        }
        else if(numbers[i] == numbers[i+1]+1){
            k--;
        }
    }
    if(k == 7){
        printf("ascending");
    }
    else if(k == -7){
        printf("descending");
    }
    else {
        printf("mixed");
    }

    return 0;
}

