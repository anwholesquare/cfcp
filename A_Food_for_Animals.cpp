#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll a,b,c,x,y;
    cin >> a >> b >> c  >> x >> y;
    ll rem_x = (x > a) ? x-a:0;
    ll rem_y = (y > b) ? y-b:0;
    if ((rem_x + rem_y) <= c) {cout << "YES\n";}
    else {cout <<"NO\n";}
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