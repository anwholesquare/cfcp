#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;
ll mod = 998244353;

int gcd (int a, int b) { return (b) ? gcd (b, a%b) : a;}

ll nCr (int n , int r ) {
    ll p= 1, k = 1;
    r = min (n-r, r);
    if (r != 0) {
        while (r) {
            p*=r;
            k*=r;
            ll m = gcd(p,k);
            p/=m;
            k/=m;
            r--; n--;
        }
    }else{
        return p;
    }
    return p;
}

ll modfact (int n) {
    ll mul = 1 % mod;
    for (ll i =2; i <= n; i++) {
        mul *= (i * i) % mod;
        mul = mul % mod;
    }
    return (mul);
}


void solve () {
    ll n;
    cin >> n;
    if ( n % 2) { cout << 0 << endl; }
    else {
        n = n/2;
        cout << modfact(n) << endl;
        return;
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