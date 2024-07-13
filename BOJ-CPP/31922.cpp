#include <iostream>
using namespace std;

int main() {

    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    if(d1 + d3 > d2) {
        cout << d1 + d3;
    }
    else {
        cout << d2;
    }
    


    return 0;
}