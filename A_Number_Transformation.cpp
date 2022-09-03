#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b) {
    return b ? gcd(b, a%b) : a;
}

void solve () {
    int x,y;
    cin >> x >> y;
    
    
    if (y % x != 0)  {
        cout << 0 << " " << 0 << endl; return;
    }

    int z = y / x;
    int sum = 0;
    
    cout << 1 << " " << z << endl;


}

int main () {
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}