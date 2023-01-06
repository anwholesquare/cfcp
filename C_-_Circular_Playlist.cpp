#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n, t;
    cin >> n >> t;
    vector<ll> v;
    ll sum =0;
    for (int i=0; i<n;i++) {
        ll x;
        cin >> x;
        v.pb(x);
        sum += x;
    }
    ll r = t % sum;
    for (int i =0; i<n; i++) {
        if (r > v[i]) { r = r - v[i];}
        else {
            cout << i+1 << " " << r << endl; return;
        }
    }




}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}