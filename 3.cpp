#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n, r, c;
    cin >> n >> r >> c;
    int mat[n+1][n+n+1];
    memset(mat, 0, sizeof(mat));
    int row = r;
    int cnt = 1;
    c += n/2;
    mat[r][c] = 1;
    while (row--) {
        if (c+cnt < n+n+1) mat[row][c+cnt] = 1;
        if (c-cnt >= 0) mat[row][c-cnt] = 1;
        cnt++;
    }
    row = r;
    cnt= 1;
    while (row++ && row < n+1) {
        if (c+cnt < n+n+1) mat[row][c+cnt] = 1;
        if (c-cnt >= 0) mat[row][c-cnt] = 1;
        cnt++;
    }

    for (int i =1; i<=n; i++) {
        string s = "";
        vector<ll> v;
        for (int j =0; j<n+n+1; j++) {
            if (mat[i][j] == 1) v.pb(j);
            s+=".";
        } 

        for (auto k : v) {
            if (k-1 >= 0) s[k-1] = '*';
            if (k+1 < n+n+1) s[k+1] = '*'; 
        }

        cout << s.substr((n/2)+1, n) << endl;
    }

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}