#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    ll len1 = a.size();
    ll len2 = b.size();
    ll startpos = -1;

    for (int i = 0; i <n; i++) {
        if (a[i] == b[0]) {startpos = i; len1 -= i; break;}
    }
    if (startpos == -1 || len1 < len2) {
        cout << "NO\n"; return;
    }

    if (a[n-m] == b[0] || startpos < (n-m)) {
        a[n-m] = b[0];
        string s = a.substr(n-m, len2);
        if (s == b) {cout << "YES\n"; return;}
        else {cout << "NO\n"; return;}

    } else{
        cout << "NO\n"; return;
    }
    // for (int i = 0; i<len2; i++) {
    //     //cout << startpos << "-" << i <<  ": " << a[startpos + i] << " " << b[i] << endl;
    //     if (a[startpos + i] != b[i]) {
    //         startpos++;
    //         a[startpos] = b[0];
    //         len1--;
    //         if (len1 < len2) {cout << "NO\n"; return;}
    //         i=-1;
    //     }
    // }
    // cout << "YES\n"; 

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