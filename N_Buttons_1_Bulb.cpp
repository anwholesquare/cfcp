#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll N;
    cin >> N;
    string s;
    cin >> s;
    string r;
    cin >> r;
    ll cnt = 0;
    for (int i =0; i < s.size(); i++) {
        if (s[i] != r[i]) cnt++;
    }
    if (cnt % 2 == 0) cout << "1\n";
    else cout << "0\n";

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