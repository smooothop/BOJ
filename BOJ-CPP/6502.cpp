#include <iostream>
#include <math.h>
using namespace std;


int main() {

    double r, w, l;

    int i = 1;
    while(1) {
        cin >> r;
        if(r == 0)
            break;
        cin >> w >> l;

        double len = sqrt(pow(w/2, 2) + pow(l/2, 2));
        if(r >= len) {
            cout << "Pizza " << i << " fits on the table." << endl;
        }
        else {
            cout << "Pizza " << i << " does not fit on the table." << endl;
        }
        i++;
    }



    return 0;
}