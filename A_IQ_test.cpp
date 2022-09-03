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
    vector<ll> even, odd;
    for (int i =0; i<n; i++) {
        ll x;
        cin >> x;
        if (x % 2 == 0 ) { even.pb(i+1); }
        else {odd.pb(i+1);}
    }

    if (even.size() == 1) cout << even[0]  << endl;
    else {cout << odd[0] << endl;}

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