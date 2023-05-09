#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;
map <char,ll> f1;
map <char,ll> f2;
void solve () {
    int n;
    cin >> n;
    string s;
    cin >> s;
    map <char, ll> f;
    for (int i= 0; i< s.size(); i++) {
        f[s[i]]++;
    }
    
    bool ff1 = 0, ff2 = 0;
    for (auto it = f1.begin(); it!= f1.end(); it++) {
        if (f[(char)it->first] < it->second){ff1 = 1; break;}
    }

    if (ff1 == 0) {
        cout << "Yes\n"; return;
    }

    for (auto it = f2.begin(); it!= f2.end(); it++) {
        if (f[(char)it->first] < it->second){ff2 = 1; break;}
    }

    if (ff2 == 0) {
        cout << "Yes\n"; return;
    }
    cout << "No\n"; return;



}

int main () {

    
    
    int t = 1;
    cin >> t;
    string s1 = "assembler";
    string s2 = "operand";
    f1['a'] = 1;
    f1['s'] = 2;
    f1['e'] = 1;
    f1['m'] = 1;
    f1['b'] = 1;
    f1['l'] = 1;
    f1['e'] = 1;
    f1['r'] = 1;

    f2['o'] = 1;
    f2['p'] = 1;
    f2['e'] = 1;
    f2['r'] = 1;
    f2['a'] = 1;
    f2['n'] = 1;
    f2['d'] = 1;
    while (t--) {
        solve();
    }
    return 0;
}