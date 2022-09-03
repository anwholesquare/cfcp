#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;


void combUtil (vector <char> st, ll k, ll r, string &sb, string &s) {
    if (k == r) { cout << sb << endl; return;}
    
    string tmp = sb;
    for (int i =0; i<st.size(); i++) {
        if (st[i] == '_') continue;
        sb[k] = st[i];
        st[i] = '_';
        combUtil(st,k+1,r,sb,s);
        //backtracking
        //st[i] = sb[k];
        sb = tmp;
    }
}

void comb (ll r, string &s) {
    ll k =0; string sb;
    map<char,bool> mp;
    for (int i =0; i<s.size(); i++) {
        mp[s[i]] = 1;
    }
    map<char,bool>::iterator it;
    vector<char> st;
    for (it = mp.begin(); it != mp.end(); it++) {
        st.push_back(it->first);
    }

    sb = "";sb.insert(0,r,'_');
    combUtil (st,0,r,sb,s);
    
}  

void solve () {

    string s;
    cin >> s;
    ll r;
    cin >> r;
    comb(r,s);
    
    
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