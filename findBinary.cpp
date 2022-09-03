#include <bits/stdc++.h>
using namespace std;

string binary (int x, int ulta) {
    string s = "";
    if (x == 0) return "0";
    while (x != 0) {
        s += (x & 1) ? '1' : '0';
        x = x >> 1;
    }
    if (ulta) return s;
    else {
        reverse(s.begin(), s.end());
        return s;
    }
}

int main () {
    int x;
    cin >> x;
    string s = binary(x, 0);
    
    cout << s << endl;

}