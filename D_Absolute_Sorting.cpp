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
    cin >> n;
    vector<ll> v;
    for (int i =0; i<n; i++) {
        ll x;
        cin >> x;
        v.pb(x);
    }
    ll end = 10e9, start = 0;
    for (int i =0; i<n-1; i++) {
        
        if (v[i] > v[i+1]) {
            start = max( start, (v[i]+v[i+1]+1)/2);
        }
        if (v[i] < v[i+1]){
            end = min (end, (v[i]+v[i+1])/2);
        }
    }

    if (end-start >= 0) {
        cout << start << endl;
    }else {
        cout << -1 << endl;
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