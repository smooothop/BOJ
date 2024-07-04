#include <iostream>
using namespace std;

int max_num(int a, int b, int c) {
    
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    return max;
}


int main() {

    int max;
    int a, b, c;

    while(1) {
        cin >> a >> b >> c;

        if(a == 0 && b == 0 && c == 0){
            break;
        }

        max = max_num(a, b, c);
        if(max*max == a*a + b*b + c*c - max*max) {
            cout << "right" << endl;
        }
        else 
            cout << "wrong" << endl;
        
    }



    return 0;
}