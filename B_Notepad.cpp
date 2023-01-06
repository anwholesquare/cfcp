#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (n <= 3) {cout << "NO\n"; return;}
    map <string, vector<int>> mp;
    for (int i =0; i<s.size()-1; i++) {
        string st;
        st.pb(s[i]);
        st.pb(s[i+1]);
        mp[st].pb(i);
        if (mp[st].size() > 1 && (mp[st][0]+1 != mp[st][mp[st].size()-1])) {
            cout << "YES\n"; return;
        }
    }

    cout << "NO\n";
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