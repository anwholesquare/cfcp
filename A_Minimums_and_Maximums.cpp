#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b) { return b ? gcd(b, a % b) : a; }
int lcd (vector<int> v){
    int ans = v[0];
    for (int i =1;i<v.size();i++) {
        ans = (v[i] * ans) / gcd(v[i], ans);
    }
    return ans;
}
void solve() {
    int l1, r1;
    int l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (l2 > r1) {
        cout << l1 + l2 << endl; return;
    }
    if (l1 > r2) {
        cout << l1 + l2 << endl;return;
    }
    else {
        cout << max (l1,l2) << endl;return;
    }

}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}