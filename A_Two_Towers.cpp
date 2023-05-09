#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll a,b;
    cin >> a >> b;
    string s1, s2;
    cin >> s1 >> s2;
    ll cnt = 0;
    ll index = 0;
    for (int i =0; i<s1.size()-1; i++) {
        if (s1[i] == 'R' && s1[i+1] == 'R') {
            cnt++;index = i+1;
        }
        if (s1[i] == 'B' && s1[i+1] == 'B') {
            cnt++; index = i+1;
        }
    }

    if (cnt > 1) {cout << "NO" << endl; return;}
    else {
        for (int i =0; i<s2.size()-1; i++) {
            if (s2[i] == 'R' && s2[i+1] == 'R') {
                cnt++; index = i+1;
            }
            if (s2[i] == 'B' && s2[i+1] == 'B') {
                cnt++; index = i+1;
            }
        }
        if (cnt == 1 && s1[s1.size()-1] != s2[s2.size()-1]) {
            cout << "YES\n";
        }
        else if (cnt ==0) {cout << "YES\n";}
        else {
            cout << "NO\n"; return;
        }
    }
 
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