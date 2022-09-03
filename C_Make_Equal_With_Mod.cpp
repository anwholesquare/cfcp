#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

int gcd (int a, int b) {return b ? gcd (b, a%b) : a;}
int lcm (int a, int b) {return (a*b)/ gcd (a, b);}

void solve () {
    ll n;
    cin >> n;
    vector<ll> v ( n, 0);

    int zcnt = 0, onecnt = 0;
    for (int i = 0; i<n; i++ ) {
        cin >> v[i];
        if (v[i] == 0) zcnt++;
        if (v[i] == 1) onecnt++;
    }

    if (zcnt > 0 && onecnt > 0) {cout << "NO\n"; return;}
    if (onecnt > 0) {
        sort(v.begin(), v.end());
        for (int i =0; i<n-1; i++) {
            if (v[i] == v[i+1] -1) {
                cout << "NO\n"; return;
            }
        }
        cout << "YES\n"; return;
    }else {
        cout << "YES\n"; return;
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