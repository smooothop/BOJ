#include <iostream>
#include <cstring>
using namespace std;
#define ARR_MAX 50

void fragment(int n, int str[]){
    for(int i = 0; n == 0; i++){
        str[i] = n%10;
    }
}

int main(){

    int n;
    int frag[ARR_MAX];
    cin >> n;
    fragment(n, frag);
    cout << frag[0];



    return 0;
}