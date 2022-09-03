#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    vector <ll> v;
    ll n,q;
    cin >> n;
    for (ll i =0; i <n; i++) {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    cin >> q;
    sort(v.begin(), v.end());
    // for (int i =0; i < v.size(); i++) {
    //     cout << v[i] << " ";
    // }
    cout << endl;
    while (q--) {
        // ll m;
        // cin >> m;
        // ll res = 0;
        // // binary search ranging
        // ll low = 0;
        // ll high = n -1;
        // if (m < v[0]) {cout << 0 << endl; continue;}
        // if (m >= v[high]) {cout << n << endl; continue;}
        // while (low < high) {
        //     ll mid = (low + high ) / 2;
        //     if (v[mid] < m && v[mid+1] > m) {
        //         res = mid + 1; break;
        //     }
        //     else if (mid != 0 && v[mid] > m && v[mid-1] < m) {
        //         res = mid; break;
        //     }
        //     else if (v[mid] == m) {
        //         res = mid + 1; break;
        //     }
        //     else if (v[mid] > m) {
        //         high = mid - 1; continue; 
        //     }
        //     else if (v[mid] < m) {
        //         low = mid + 1; continue;
        //     }
            
        // }
        //cout << res << endl;

        ll m;
        cin >> m;
        vector<ll>::iterator res = upper_bound (v.begin(), v.end(), m);

        cout << (res-v.begin()) << endl; 
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