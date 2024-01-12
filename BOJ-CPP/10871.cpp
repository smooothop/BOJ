#include <iostream>
using namespace std;

int main(){

    int n, x;
    int a[10000];
    cin >> n >> x;
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(x > a[i]){
            cout << a[i] << " ";
        }
    }



    return 0;
}