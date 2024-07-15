#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

int main () {

    system_clock::time_point start_time = system_clock::now();

    // put a code here.

    system_clock::time_point end_time = system_clock::now();

    milliseconds ms = duration_cast<milliseconds>(end_time - start_time);
    seconds sec = duration_cast<seconds>(end_time - start_time);

    cout << endl << ms.count() << "ms" << endl << sec.count() << "s";
}