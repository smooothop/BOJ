#include <iostream>
using namespace std;



int main() {

    int n;
    int *num = new int[n];
    int count = 0;
    bool b;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num[i];
    }

    for(int i = 0; i < n; i++) {
        if(num[i] == 1) {
            b = false;  
        }
        else if (num[i] == 2) {
            count++;      
        }
        else {
            for(int j = 2; j < num[i]; j++) {
            
            if(num[i] % j == 0) {
                b = false;
                break;
            }
            else 
                b = true;
        }
        }
        if(b == true)
            count++;
    }

    cout << count;


    




    return 0;
}