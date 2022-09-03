#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

map <int, int> power;

void solve () {
    ll n, k;
    cin >> n >> k;
    map <int, ll> mp;
    for (int i =0; i<n; i++) {
        int x; cin >> x;
        string s = bitset<31>(x).to_string();
        //cout << s << endl;
        for (int j =0; j <=30; j++) {
            mp[30-j] += (s[j] - '0');
        }
    }
    ll sum = 0;
    for (int i =30; i>=0; i--) {
        if ((n-mp[i]) > k) continue;
        sum += power[i];
        k -= (n-mp[i]);
    }

    cout << sum << endl;


}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    for (int i =0; i<=30; i++) {
        power[i] = pow(2,i);
    }
    int t = 1;
    cin >> t;
    
    while (t--) {
        solve();
    }
    return 0;
}