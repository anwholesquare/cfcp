#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll r, c;
    cin >> r >> c;
    ll x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2>> y2;
    if ((x1 == 1 && y1 == 1) || (x1 == 1 && y1 == c) || (x1 == r && y1 == 1) || (x1 == r && y1 == c)) {
        cout << 2 << endl;
        return;
    }
    else if ((x2 == 1 && y2 == 1) || (x2 == 1 && y2 == c) || (x2 == r && y2 == 1) || (x2 == r && y2 == c)) {
        cout << 2 << endl;
        return;
    }
    else if (x1 == 1 || x1 == r || y1 == 1 || y1 == c) {
        
        cout << 3 << endl;
        return;
    }
    else if (x2 == 1 || x2 == r || y2 == 1 || y2 == c) {
        cout << 3 << endl;
        return;
    }
    else {
        cout << min( min(r,c), (ll)4) << endl;
        return;
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