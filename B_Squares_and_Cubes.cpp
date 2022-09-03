#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    map <ll, ll> mp;
    ll num = 1000000000;
    cin >> num;
    ll i;
    ll lim = sqrt(num);
    ll lim3 = cbrt(num);
    ll addr = 1;
    int cnt = 0;
    for ( i = 1; addr <= num; i++ ) {
        addr = i*i;
        if (i <= lim3) {
            mp[i*i*i]++;
        }
        if (mp[addr]>0) {cnt++;}
        else mp[addr]++;
        
        
    }

    cout << ((int)sqrt(num) + (int)cbrt(num) ) - cnt << endl;
    
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