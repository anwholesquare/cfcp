#include <bits/stdc++.h>
using namespace std;

struct dragon {
    int dragonPower, dragonBonus;
};

void swap (dragon &a1, dragon &a2) {
    dragon temp = a1;
    a1 = a2;
    a2 = temp;
}
int main () {
    int s, n;
    cin >> s >> n;
    dragon dg[n];
    for (int i =0; i < n; i++) {
        cin >> dg[i].dragonPower >> dg[i].dragonBonus;
    }

    for (int i = 0; i <n; i++) {
        for (int j = 0; j <n; j++) {
            if (i == j) continue;
            if (dg[i].dragonPower < dg[j].dragonPower) {
                swap(dg[i], dg[j]);
            }
            else if (dg[i].dragonPower == dg[j].dragonPower & dg[i].dragonBonus > dg[j].dragonBonus) {
                swap(dg[i], dg[j]);
            }
        }
    }
    int flag = 0;
    for (int i =0; i <n; i++) {
        if ((s- dg[i].dragonPower) > 0) {
            s+= dg[i].dragonBonus;
        }else{
            flag = 1;
            break;
        }
    }

    if (flag) {
        cout << "NO\n";
    }else{
        cout << "YES\n";
    }
    return 0;
}