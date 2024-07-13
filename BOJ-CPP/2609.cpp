#include <iostream>
using namespace std;

int main() {

    int a, b;
    int gcd;
    int lcm;
    cin >> a >> b;

    int max = (a > b) ? a : b;

    for(int i = 1; i <= max; i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    if(a == b) {
        lcm = a;
    }
    else {
        lcm = a * b / gcd;
    }

    cout << gcd << endl << lcm;



    return 0;
}