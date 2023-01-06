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
    vector <ll> v;
    map <ll, vector<ll>> f1;
    ll l = 1, r = n;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        v.pb(x);
        // if (f1[x].size() == 0) f1[x].pb(i+1);
        // else {
        //     if (l == -1 || l > f1[x][0]) {
        //         l = f1[x][0]; 
        //     }else {
        //         r = i+1;
        //     }
        // }
    }

    // if (l == -1) {
    //     cout << 1 << " " << n << endl; return;
    // }

    cout << l << " " << r << endl;

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