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
    map <char, vector<ll> > freq;
    for (int i = 0; i < n; i++) {
        freq[s[i]].pb(i);
    }
    ll q;
    cin >> q;
    for (auto it = freq.begin(); it != freq.end(); it++) {
            vector<ll> tempo = it->second; sort(all(tempo));
            freq[it->first] = tempo;
            // cout << it->first << ": ";
            // for (int i =0; i< it->second.size(); i++) {
            //     cout << it->second.at(i) << " ";
            // }
            // cout << endl;
    }
    
    while (q--){
        string t;
        cin >> t;
        
        
        bool flag = 0;
        
        int lastIndex = -1;
        for (int i =0; i < t.size(); i++) {
            
            auto it1 = upper_bound (all(freq[t[i]]), lastIndex);
            if (it1 == freq[t[i]].end()) {
                flag = 1; break;
            }

            lastIndex = *it1;
            //cout << lastIndex << endl;
            
        }

        if (flag) {
            cout << "NO" << endl;
        }else {
            cout << "YES" << endl;
        }
        
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