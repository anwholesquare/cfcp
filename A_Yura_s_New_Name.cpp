#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    string s;
    cin >> s;
    if (s == "^" && s.size() == 1) {
        cout << 1 << endl; return;
    }
    ll cnt = 0;
    ll len = 0;
    char st = '_';
    for (int i =0; i<s.size(); i++) {

        if (s[i] == '_') {len++; if (len ==1) st = (i-1 >= 0) ? s[i-1] : '_';}
        else if (len >= 1) {
            cnt += (st == '^') ? len-1 : len;
            len = 0;
        }
    }

    if (len >= 1) {
            cnt += (st == '^') ? len : len+1;
    }


    cout  << cnt << endl;


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