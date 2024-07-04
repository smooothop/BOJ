#include <iostream>
using namespace std;

int main() {

    int p, c;

    cin >> p >> c;

    int total = p * 50 - c * 10;
    if (p > c) {
        total += 500;
    }

    cout << total;



    return 0;
}