#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;

    cin >> s;
    if(!(s.compare("NLCS"))) {
        cout << "North London Collegiate School";
    }
    else if(!(s.compare("BHA"))) {
        cout << "Branksome Hall Asia";
    }
    else if(!(s.compare("KIS"))) {
        cout << "Korea International School";
    }
    else if(!(s.compare("SJA"))) {
        cout << "St. Johnsbury Academy";
    }


    return 0;
}