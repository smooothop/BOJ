#include <iostream>
using namespace std;

int main() {

    int t;
    int hp, mp, atk, def;
    int arm_hp, arm_mp, arm_atk, arm_def;
    int power;

    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> hp >> mp >> atk >> def
        >> arm_hp >> arm_mp >> arm_atk >> arm_def;
        hp += arm_hp;
        mp += arm_mp;
        atk += arm_atk;
        def += arm_def;

        if(hp < 1)
            hp = 1;
        if(mp < 1)
            mp = 1;
        if(atk < 0)
            atk = 0;

        
        power = hp + mp * 5 + atk * 2 + def * 2;
        
        cout << power << endl;
    }
    



    return 0;
}