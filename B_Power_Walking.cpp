#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
 
    set<ll> st;
    map <ll, ll> freq;
    int cnt = 0;
    for (int i =0; i<n; i++) {
        ll x;
        cin >> x;
        st.insert(x);
        freq[x]++;
        if (freq[x] == 2) {cnt+=2;}
        else if (freq[x] > 1) {cnt++;}
    }

    //cout << cnt << endl;
    // int res = st.size();
    // ll diff = n -cnt;
    // cout << res << " ";
    // for (int k =2; k<=n; k++) {
    //     if (diff >0) {
    //         cout << res << " ";
    //         diff--;
    //     }else{
    //         res++;
    //         cout << res << " ";
    //     }
    // }
    ll res = st.size();
    for (ll i=1; i<=n;i++) {
        cout << max(i,res) << " ";
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