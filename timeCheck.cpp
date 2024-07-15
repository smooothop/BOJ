#include <iostream>
#include <time.h>
using namespace std;

int main() {

    time_t start, end;
    double result;

    start = time(NULL);

    cout << "Hello World";

    end = time(NULL);
    result = (double)(end - start);

    cout << endl << "수행 시간: " << result << " second";
}