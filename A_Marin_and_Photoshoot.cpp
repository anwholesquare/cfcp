#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> zeroPos;
    for (int i =0; i<n;i++) {
        if (s[i] == '0' ) {
            zeroPos.push_back(i);
        }
    }
    int res = 0;
    for (int i =1; i<zeroPos.size(); i++) {
        int diff = zeroPos[i] - zeroPos[i-1];
        if (diff == 1) {res +=2;}
        if (diff == 2) {res++;}
    }
    cout << res << endl;

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}