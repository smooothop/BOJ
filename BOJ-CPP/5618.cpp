#include <iostream>
using namespace std;

int main() {

    int n, num[3], co_div;
    int max = 0;
    cin >> n;


    for(int i = 0 ; i < n; i++) {
        cin >> num[i];
        if(num[i] > max){
            max = num[i];
        }
    }

    co_div = 1;
    while(co_div <= max) {
        int div_count = 0;
        for(int i = 0 ; i < n; i++) {
            if(num[i] % co_div == 0) {
                div_count++;
            }
        }
        if(div_count == n){
            cout << co_div << endl;
        }
        co_div++;
    }


    return 0;
}