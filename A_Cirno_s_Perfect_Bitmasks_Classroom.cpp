#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin >> x;

    int start = 0b1;
    int k = 1;
    while((x & start) == 0) {
        start = start << 1;
        k++;
    }

    
    for (int i =start; i <= pow(2,k+1); i++) {
        if (i == x) continue;
        int res1 = (min(i,x) & max(i,x));
        int res2 = (min(i,x) ^ max(i,x));
        if (res1 > 0 && res2 > 0) {
            cout << i << endl; return;
        }
    }
    
    cout << x+1 << endl;

}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}