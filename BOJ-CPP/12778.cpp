#include <iostream>
using namespace std;



int main() {

    int t;
    cin >> t;

    char alphabet[26];

    for (int i = 0; i < 26; ++i) {
        alphabet[i] = 'A' + i;
    }

    int m;
    char cn;

    for(int i = 0; i < t; i++) {
        cin >> m >> cn;

        if (cn == 'C') {

            char *arr = new char[m];

            for(int i = 0; i < m; i++) {
                cin >> arr[i];
            }
            for(int i = 0; i < m; i++) {
                cout << arr[i] - 64 << " ";
            }

            cout << endl;
            delete [] arr; 
        }
        else if (cn == 'N') {

            int *arr = new int[m];
            
            for(int i = 0; i < m; i++) {
                cin >> arr[i];   
            }
            for(int i = 0; i < m; i++) {
                cout << alphabet[arr[i] - 1] << " ";
            }

            cout << endl;
            delete [] arr; 
        }
           
    }

    

    return 0;
}