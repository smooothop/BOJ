#include <iostream>
using namespace std;

int main() {

    int n;
    double a[1000], b[1000];
    int max = 0;
    double avg = 0;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] > max) 
            max = a[i];
    }
    for(int i = 0; i < n; i++) {
        b[i] = a[i] / max * 100;
    }
    for(int i = 0; i < n; i++) {
        avg += b[i];
    }
    avg /= n;
    cout << avg;




    return 0;
}