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
    vector<pair <ll, ll>> v;
    for (int i =0; i <n;i++) {
        ll x;
        cin >> x;
        v.pb(mp(x,0));
    }
    for (int i =0; i<n;i++){
        ll x;
        cin >> x;
        v[i] = mp(v[i].first, x);
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