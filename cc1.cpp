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
    ll m;
    cin >> n >> m;
    ll sum = 0;
    for (int i =0; i<m; i++) {
        ll x; 
        cin >> x;
        sum += x;
    }
    cout << ((n * (n+1) ) / 2) - sum << endl;
    
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