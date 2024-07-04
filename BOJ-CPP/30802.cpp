#include <iostream>
using namespace std;

int main() {

    int n;
    int size[6];
    int t, p;
    int count_shirt = 0;
    int sum = 0;


    cin >> n;

    int i = 0;
    while(i < 6) {
        int tmp;
        cin >> tmp;
        if(0 <= tmp && tmp <= n) {
            size[i] = tmp;
            sum += size[i];
            i++;
        }
        
        if (sum > n)
            return 0;
    }
    cin >> t >> p;

    for(int i = 0; i < 6; i++) {
        if(size[i] != 0) {
            if(size[i] / t <= 1 && size[i] <= t) {
                count_shirt++;
            }
            else if (size[i] % t == 0) {
                count_shirt += size[i] / t;
            }
            else {
                count_shirt += (size[i] / t) + 1;
            }
        }
    }

    cout << count_shirt << endl;
    cout << n / p << " " << n % p;

    return 0;
}