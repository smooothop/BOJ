#include <iostream>
using namespace std;

int main() {

    int n, x;
    int ppl[100000];
    int sum = 0;

    cin >> n >> x;
    for(int i = 0; i < n; i++) {
        cin >> ppl[i];
        sum += ppl[i];
    }
    //cout << sum << endl;

    if(sum % x != 0) {
        cout << 0;
    }
    else{
        cout << 1;
    }


    return 0;
}