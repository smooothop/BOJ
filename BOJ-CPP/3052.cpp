#include <iostream>
using namespace std;

int main(){

    int num[10];
    int cnt = 0;

    for(int i = 0; i < 10; i++){
        cin >> num[i];
        num[i] = num[i] % 42;
    }
    for(int i = 0; i < 10; i++){
        for(int j = i+1; j < 10; j++){
            if(num[i] == num[j]){
                num[j] = '\0';
            }
        }
    }
    for(int i = 0; i < 10; i++){
        if(num[i] != '\0'){
            cnt++;
        }
    }
    cout << cnt;





    return 0;
}