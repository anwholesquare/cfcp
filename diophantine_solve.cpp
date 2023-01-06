#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

ll egcd (ll a, ll b, ll *x, ll *y) {
    if (b ==0){
        *x = 1;
        *y = 0;
        return a;
    }
    ll x1, y1;
    ll gcd = egcd(b,a%b,&x1,&y1);
    *x = y1;
    *y = x1 - (a/b)*y1;
    return gcd;
}

void solve () {
    ll a,b;
    cin >> a >> b;
    ll x = 0, y =0;
    cout << egcd(a,b,&x,&y) << " " << x << " " << y << endl;
    cout << ((x%b)+b)%b << endl;
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