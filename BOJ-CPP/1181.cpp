#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {

    int n, count = 0;
    cin >> n;

    string *arr = new string[n];

    for(int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        if(tmp.length() <= 50)
            arr[i].assign(tmp);
    }

    sort(arr, arr+n);

    for(int j = 0; j < n-1; j++) {
            if(arr[j] == arr[j+1]) {
                arr[j+1].clear();
            }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-1; j++) {
            if(arr[j].length() > arr[j+1].length()) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    delete [] arr;

    return 0;
}