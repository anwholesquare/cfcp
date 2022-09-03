#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;



void solve () {
    double a, b,c,d;
    cin >> a >> b >> c >> d;
    if (a == 0 && c != 0) {cout << "1\n"; return;}
    else if (a == 0 && c==0) {cout << "0\n"; return;}
    else if (c ==0 && a != 0) {cout << "1\n"; return;}
    ll e = b * c;
    ll f = a * d;
    ll cnt = 2;
    if (e == f) cnt = 0;
    else if (f % e == 0) cnt = 1;
    else if (e % f == 0) cnt = 1;
    cout << cnt << endl; 

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