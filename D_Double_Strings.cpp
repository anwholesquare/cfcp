#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<string> v (n, "a");
    map <string, bool> mp;

    for (int i=0; i<n;i++) {
        cin >> v[i];
        mp[v[i]] = 1;
    }

    for (int i = 0; i<n; i++) {
        bool flag = 1;
        //check substring
        for (int j = 1; j<v[i].size(); j++) {
            string sub = v[i].substr(0,j-0);
            string subUlta = v[i].substr(j,v[i].size()-j);
            //cout << sub << " " << subUlta << endl;
            if (mp[sub] && mp[subUlta]) {
                cout << 1; flag = 0; break;
            }
        }
        if (flag) cout << 0;  
    }
    cout << endl;
    return;

    
}

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();

    }
    return 0;
}