#include <stdio.h>

int main(){

    int i, max_idx;
    int a[9];
    int max = a[0];
    for(i = 0; i < 9; i++){
        scanf("%d", &a[i]);
        if(max <= a[i]){
            max = a[i];
            max_idx = i+1;
        }
    }
    
    printf("%d\n%d", max, max_idx);




    return 0;
}