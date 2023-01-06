#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n,k;
    cin >> n >> k;
    vector<ll> v;
    for (int i =0; i< n; i++) {
        ll x;
        cin >> x;   
        v.pb(x);
    }
    k = min (n, k);
    for (int i =k; i < n; i++) cout << v[i] << " ";
    for (int i = n-k; i < n; i++) cout << 0 << " ";
    cout << endl;    

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