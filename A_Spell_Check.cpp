#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (n < 5 || n > 5) {cout << "NO\n"; return;}

    map <int, int> mpr;

    for (int i =0; i < s.size(); i++) {
        mpr[s[i]]++;
    }

    if (mpr['T'] == 1 && mpr['i'] == 1 && mpr['m'] == 1 && mpr['u'] && mpr['r'] == 1) {
        cout << "YES\n"; return;
    }else {
        cout << "NO\n"; return;
    }

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