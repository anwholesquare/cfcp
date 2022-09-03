#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve () {
    ll n, q;
    cin >> n >> q;
    ll v[n+10];
    long long sum = 0;
    map <ll,ll> mp;
    int update = -1;
    for (int i =0; i<n;i++) {
        cin >> v[i];
        sum += v[i];
    }
    
    while (q--)  {
        int type;
        cin >> type;
        if (type == 1) {
                ll i, x;
                cin >> i >> x;
            if (update == -1) {
                sum = sum - v[i-1] + x;
                v[i-1] = x;
                cout << sum << endl;
            }else{
                ll del = (mp[i] == 0) ? update : mp[i];
                sum = sum - del + x;
                mp[i] = x;
                cout << sum << endl; 
            }
            
        }else{
            ll x;
            cin >> x;
            sum = x * n;
            //fill (v.begin(), v.end(), x);
            mp.clear();
            update = x;
            cout << sum << endl;
        }
    }
}

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t = 1;
    // while (t--) {
        solve();
    //}

    return 0;
}