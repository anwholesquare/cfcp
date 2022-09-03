#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    vector <int> v;
    int eq = 0;
    for (int i =0; i<n; i++) {
        int x; cin >> x; v.push_back(x);
        if (i > 0 && v[i] == v[i-1]) eq++;
    }
    if (eq <= 1) {cout << "0" << endl; return;}
    int op = 0;

    int l = -1, r;
    for (int i =0; i<(n-1); i++) {
        if (v[i] == v[i+1]) {
            if (l == -1) {l = i; r=i;}
            else { r = i;}
        }
    }

    if (l == r) cout << "0" << endl;
    else cout << max(1, r-l-1) << endl;

}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}