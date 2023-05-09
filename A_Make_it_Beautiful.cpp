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
    vector<ll> v(n);
    cin >> v[0];
    bool f =0;
    for (int i =1; i<n; i++) {
        cin >> v[i];
    } 
    sort (all(v));

    vector<ll> res;
    for (int i=0; i<=(n/2); i++) {
        res.pb(v[i]);
        res.pb(v[n-1-i]);
    }

    int pre = res[0];
    for (int i =1; i<n; i++) {
        if (res[i] == pre) {
            cout << "NO\n"; return;
        }
        pre+= res[i];
    }
    cout << "YES\n";
    for (int i =0; i<n; i++) cout << res[i] << " ";
    cout << endl;
    


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