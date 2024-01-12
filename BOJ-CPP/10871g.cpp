#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, value;
    cin >> n >> x;
    
    for(int i = 0; i < n; i++){
        cin >> value;
        if(value < x){
            cout << value << " ";
        }
    }

    return 0;
}