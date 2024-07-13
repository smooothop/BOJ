#include <iostream>
#include <cstring>
using namespace std;

int main() {

    string str;
    bool palindrome = true;

    while(1) {
        cin >> str;
        if(str == "0")
            break;

        int len = str.length() / 2;
        
        for(int i = 0; i < len; i++) {
            if(str[i] != str[str.length()-i-1]){
                palindrome = false;
                break;
            }
        }

        if(palindrome) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
        palindrome = true;
    }

    return 0;
}
