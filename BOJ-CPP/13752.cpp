#include <iostream>
using namespace std;

int main() {

    int t;
    int arr[100];

    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < t; i++) {
        for(int j = 0; j < arr[i]; j++){
            cout << "=";
        }
        cout << endl;
    }
    


    return 0;
}