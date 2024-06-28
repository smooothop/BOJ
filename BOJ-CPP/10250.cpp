#include <iostream>
using namespace std;

int main() {

    int t, h, w, n, count;

    int j;
    int k;

    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> h >> w >> n;
        count = 0;

        if(n > h*w)
            break;

        for(j = 1; j <= w; j++) {
            for(k = 1; k <= h; k++) {
                count++;
                if(count == n) {
                    if(j < 10) {
                        cout << k << "0" << j << endl;
                    }
                    else
                        cout << k << j << endl;
                    break;
                }
            }
        }
    }


    return 0;
}