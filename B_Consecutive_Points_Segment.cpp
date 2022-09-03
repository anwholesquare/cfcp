#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve() {
    ll n;
    cin >> n;
    vector<ll>v;
    int flag = 0;
    for (int i =0; i<n; i++) {
        ll x; cin >> x; v.push_back(x);
    }
    int cnt2 = 0, cnt3 =0;
    for (int i = 1; i<n; i++) {
        int diff = v[i] - v[i-1];
        if(diff == 3) {
            cnt3++;
            if (cnt2 > 0) { cout << "NO\n"; return;}
            if (cnt3 > 1) { cout << "NO\n"; return;}
        }
        if (diff == 2) {
            cnt2++;
            if (cnt3 > 0) { cout << "NO\n"; return;}
            if (cnt2 > 2) { cout << "NO\n"; return;}
        }
        if (diff > 3) {
            cout << "NO\n"; return;
        }
    }
    cout << "YES\n";
    

    
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}