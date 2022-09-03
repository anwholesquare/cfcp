#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n, k;
    cin >> n >> k;

    vector<ll> v;
    map <ll, ll> mp;

    for (int i =0; i<n; i++) {
        ll x;
        cin >> x;
        mp[x]++;
        v.push_back(x);
    }
    
    vector<ll> res;
    map<ll,ll>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++) {
        if (it->second >= k) {
            //cout << it->first << endl;
            res.push_back(it->first);
        }
    }

    if (res.size() == 0) {
        cout << -1 << endl;
    }
    else if (res.size() == 1) {
        cout << res[0] << "  " << res[0] << endl;
    }
    else {
        ll l = res[0], r = res[0];
        ll ml = 0, mr = 0;
        for (int i =0; i<res.size()-1; i++) {
            if (res[i] == res[i+1] -1) {r = res[i+1];} 
            else {
                ll diff = r-l;
                if (diff >= (mr-ml)) {
                    mr = r; ml = l;
                }
                l = res[i+1];
                r = res[i+1];
            }
        }

        ll diff = r-l;
        if (diff > (mr-ml)) {
            mr = r; ml = l;
        }

        cout << ml << " " << mr << endl;
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