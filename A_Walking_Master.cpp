#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    if (d < b){
        cout << -1 << endl; return;
    }
    ll c1, d1;
    d1 = d-b;
    c1 = c - d1;
    if (c1 > a){
        cout << -1 << endl; return;
    }
    else {
        cout << (a-c1) + d1 << endl;
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