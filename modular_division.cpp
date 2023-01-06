#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// (a/p) mod q = x
// x*p mod q = a;
// (p,q) must be co-prime

ll gcd (ll a, ll b) {
    return b ? gcd (b, a%b) : a;
}

ll mod_div(ll a, ll p, ll q) {
    ll gcdv = gcd(p,q);
    if (gcdv != 1 || a >= q) return INT_MIN;
    else {
        ll mul = 0;
        for (int i = 0; i<=q-1; i++) {
            mul = i*p;
            if (mul % q == a) return i;
        }
    }
    return INT_MIN;
}

void solve () {
    ll a,p,q;
    cin >> a >> p >> q;
    cout << mod_div(a,p,q) << endl;

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