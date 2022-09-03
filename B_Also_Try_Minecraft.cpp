#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n, m;
    cin >> n >> m;
    vector <ll> v(n,0), v1(n, 0),v2 (n,0);

    ll y;
    cin >> y;
    v[0] = y;
    for (int i =1; i<n; i++) {
        ll x;
        cin >> x;
        ll damage = v[i-1] - x;
        if (damage < 0) {
            damage = 0;
        }
        v[i] = x;
        v1[i] = v1[i-1] + damage;

    }

    ll k =1;
    for (ll i =n-1; i>0;i--) {
        ll damage = v[i] - v[i-1];
        if (damage < 0) {
            damage = 0;
        }
        v2[k] = v2[k-1] + damage;
        k++;
    }

    // for (int i =0; i<n; i++) { 
    //     cout << v1[i] << " ";
    // }
    cout << endl;
    while (m--) {
        ll s, t;
        cin >> s >> t;
        ll diff = s -t;
        if (diff > 0) {
            //cout << v2[n-s] << "-" << v2[n-t] << "= ";
            cout << abs(v2[n-t] - v2[n-s]) << endl; 
        }else{
            cout << abs(v1[t-1] - v1[s-1]) << endl;
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