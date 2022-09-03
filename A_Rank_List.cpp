#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n, k;
    cin >> n >> k;
    vector< pair<ll, ll> > v;
    for (int i =0; i<n; i++) {
        ll x, y;
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }

    for (int i =0; i<n; i++) {
        for (int j =i+1; j <n; j++) {
            if (v[i].first < v[j].first) {
                swap(v[i], v[j]);
            }else if (v[i].first == v[j].first){
                if (v[i].second > v[j].second) {
                    swap(v[i], v[j]);
                }
            }
        }
    }

    // for (int i =0; i<n; i++) {
    //     cout << v[i].first << " " << v[i].second << endl;
    // }
    // cout << endl;
    ll ff = v[0].first;
    ll ss = v[0].second;
    
    ll pcd = 0;
    ll pos =1;
    
    while (true) {
        ll cnt =0;
        for (; pcd <n; pcd++) {
            if (v[pcd].first == ff && v[pcd].second == ss) {
                cnt++;
            }else{
                ff = v[pcd].first; ss= v[pcd].second;pos++;
                break;
            }
        }
        if (pcd >= k) {
            cout << cnt << endl; return;
        }
        cnt = 0;
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