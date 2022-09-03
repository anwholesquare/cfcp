#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    string s, s1;
    cin >> s >> s1;
    map <char, bool> mp;
    map <char, int> freq;
    for (int i =0; i<s1.size(); i++) {
        mp[s1[i]] = 1;
        freq[s1[i]]++;
    }
    
    
    map <char, vector<int> > mp1;
    for (int i =0; i<s.size(); i++) {
        if (mp[s[i]] == 1) {
            mp1[s[i]].push_back(i);
        }
    }
    string sp = "";
    vector<int> v;
    //cout << s1 << endl;
    for (int i = 0; i < s1.size(); i++) {
        
        int freqi = freq[s1[i]];
        if(mp1[s1[i]].size() < freqi) {
             cout << "NO\n"; return;
        }
        if (mp1[s1[i]].size() == 0) {
            cout << "NO\n"; return;
        }
        int index = mp1[s1[i]].at(mp1[s1[i]].size() - freqi);
        freq[s1[i]]--;
        //sp += s1[i];
        v.push_back(index);
        // for (int j =0; j<=index; j++) {
        //     s[j] = '0';
        // }
        // cout << s << endl;
    }

    //cout << sp << endl;
    for (int i =0; i<v.size()-1; i++) {
        //cout << v[i] << " ";
        if (v[i] < v[i+1]) continue;
        else {cout << "NO\n"; return;}
    }

    cout << "YES\n";

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