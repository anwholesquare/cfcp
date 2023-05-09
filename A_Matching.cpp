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
    if (s[0] == '0') {
        cout << 0 << endl; return;
    }
    ll unknown  = 0;
    for (int i  =1; i < s.size(); i++) {
        if (s[i] == '?') {
            unknown++;
        }
    }
    ll lu = 1;
    if (s[0] == '?') {
        lu = 9;
    }
    cout << lu * (pow(10, unknown)) << endl; 

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