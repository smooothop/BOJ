#include <iostream>
#include <math.h>
#include <cstring>
#include <chrono>
using namespace std;
using namespace chrono;

int main () {


    system_clock::time_point start_time = system_clock::now();

    int n;
    

    while (true) {
        
        int x = 0;
        int init = 1, cnt1 = 4, cnt2 = 5, cnt3 = 2;
        cin >> n;
        if(n == 0)
            break;
        for(int i = 0; i < n-1; i++) {
            init += cnt1;
            cnt1 += cnt2;
            cnt2 += cnt3;
        }

        cout << init << endl;
    }
    







    system_clock::time_point end_time = system_clock::now();

    milliseconds ms = duration_cast<milliseconds>(end_time - start_time);
    seconds sec = duration_cast<seconds>(end_time - start_time);

    // cout << endl << ms.count() << "ms" << endl << sec.count() << "s";
}