#include <iostream>
using namespace std;

int main(){

    int assign[30] = {0};
    int stu = 0;

    for(int i = 0; i < 28; i++){
        cin >> stu;
        assign[stu-1] = stu;
    }
    for(int i = 0; i < 30; i++){
        if(assign[i] == 0){
            cout << i+1 << endl;
        }
    }




    return 0;
}