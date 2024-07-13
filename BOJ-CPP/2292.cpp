#include <iostream>
#include <math.h>
using namespace std;

int main() {

    long n;
    int ser = 1;
    int wall_count = 1;

    cin >> n;

    while(true) {        
        ser = 3 * pow(wall_count, 2) - 3 * wall_count + 1;
        if(ser >= n) break;
                
        wall_count++;
    }
    cout << wall_count;


    return 0;
}