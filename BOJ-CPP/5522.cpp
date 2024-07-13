#include <iostream>
using namespace std;

int main() {

    int a;
    int sum = 0;

    int i = 0;
    while(i < 5) {
        cin >> a;
        if(0 <= a && a <= 100) {
            sum += a;
            i++;
        }
    }
    cout << sum;


    return 0;
}