#include <iostream>
#include <string>
using namespace std;

int main() {

    int num1, num2, num3;
    char *c1, c2, c3;
    cin >> num1 >> num2 >> num3;
    
    cout << num1 + num2 - num3 << endl;
    to_string(num1); to_string(num2);
    int sum = stoi(to_string(num1) + to_string(num2));
    cout << sum - num3;

    return 0;
}