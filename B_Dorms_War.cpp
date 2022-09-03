#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    int p = k;
    map <char, bool> v;
    while (p--) {
        char x; cin >> x; v[x] = 1;
    } 
    int cnt = 0;
    int sizeOfOne = 0;
    for (int i =0; i<s.size(); i++) {
        if (v[s[i]] == 1) { s[i] = '1'; sizeOfOne++; }
        else s[i] = '0';
    }
    if (sizeOfOne == 0) {cout << "0\n"; return;}
    if (sizeOfOne == s.size()) {cout << "1\n"; return;}
    int maxTime = -1;
    int index =0;
    for (int i =0; i<s.size(); i++) {
        if (s[i] == '1') {
            int t = (maxTime == -1) ? (i-index) : (i-index+1);
            maxTime = (t > maxTime) ? t: maxTime;
            index = i+1;
        }  
    }
    cout << maxTime << endl;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }   
    return 0;
}