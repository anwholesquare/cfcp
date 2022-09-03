#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    map <string, ll> mp;

    string s1;
    cin >> s1;
    mp[s1]++;
    cout << "OK\n";
    for (int i =1; i<n; i++) {
        string s;
        cin >> s;
        if (mp[s] == 0) {
            cout << "OK\n";
            mp[s]++;
        }else{
            cout << s << mp[s] << endl;
            mp[s]++;
        }
    }

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}