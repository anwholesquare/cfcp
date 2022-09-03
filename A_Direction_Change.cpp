#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n, m;
    cin >> n >> m;
    
    if (n < m) {
        swap(n,m);
    }

    if (m == 1 && n >=3) {
        cout << -1 << endl; return;
    }else{
        // (n-1) = down | (n-1) = right || row distribution = - (n+m) % 2
        ll downMove = (n-1);
        ll rightMove= (n-1);
        ll rowDist = ((n+m) % 2) ? 1 : 0;
        ll ans = downMove + rightMove - rowDist;
        cout << ans << endl;
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