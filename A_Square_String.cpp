#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;



void solve () {
    string s;
    cin >> s;
    ll n = s.size();
    if (n % 2 == 1) {cout << "NO\n"; return;}
    string s1 = s.substr(0,n/2);
    string s2 = s.substr (n/2, n- (n/2+1) + 1);

    if (s1 == s2) cout << "YES\n";
    else cout << "NO\n";

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