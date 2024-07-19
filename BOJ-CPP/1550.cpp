#include <iostream>
#include <math.h>
#include <cstring>
#include <chrono>
using namespace std;
using namespace chrono;

int main () {

    char a[100] = {0};
    int b[100] = {0};
    int sum = 0;
    cin >> a;

    int len = strlen(a);
    
    for(int i = len - 1; i >= 0; i--) {
        if(65 <= a[i] && a[i] <= 70) {
            sum += (a[i] - 55) * pow(16, len - i - 1);
        }
        else if (48 <= a[i] && a[i] <= 57){
            sum += (a[i] - 48) * pow(16, len - i - 1);
        }
    } 

    cout << sum;


}