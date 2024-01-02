#include <stdio.h>

int main(){

    long n;
    long a[1000000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%ld", &a[i]);
    }
    long max = a[0], min = a[0];
    for(int i = 0; i < n; i++){
        if(max <= a[i]){
            max = a[i];
        }
        if(min >= a[i]){
            min = a[i];
        }
    }
    printf("%ld %ld", min, max);



    return 0;
}