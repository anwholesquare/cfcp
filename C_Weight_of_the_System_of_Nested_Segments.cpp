#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n, m;
    cin >> n >> m;
    vector <ll> v;
    map <ll, vector<ll> > mp;
    vector <ll> res;
    map <ll, ll> mp1;

    for (int i=0; i<m; i++) {
        ll x, w;
        cin >> x >> w;
        v.push_back(w);
        mp[w].push_back(x);
        mp1[x] = i+1;
    }

    sort(v.begin(), v.end());
    ll sum = 0;
    for (int i=0; i <2*n; i++) {
        sum += v[i];
        res.push_back(mp[v[i]].back());
        mp[v[i]].pop_back();
    }


    sort(res.begin(), res.end(), greater<ll>());
    cout << sum << endl;
    for (int i =0; i<n; i++) {
        cout << mp1[res[i]] << " " << mp1[res[res.size() - 1 - i]] << endl;
    }

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