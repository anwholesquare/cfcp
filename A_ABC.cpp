#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin>> n;
    string s; 
    cin >> s;
    if (n == 1) {
        cout << "YES\n"; return;
    }
    if (n == 2 && s[0] != s[1]) {
        cout << "YES\n"; return;
    }
    else{
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