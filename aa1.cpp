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

    char env[r][c];
    vector < pair <ll, ll> > v;
    for (int i =0; i<r; i++) {
        for (int j = 0; j <c; j++) {
            cin >> env[i][j];
            
            if (env[i][j] == '=') {
                v.pb(mp(i,j));
            }
        }
        
    }
    ll cnt = 0;

    for (auto it = v.begin(); it != v.end(); it++) {
        int col = it->second;
        int row = it->first;
        
        row--;
        while (row >= 0) {
            
            if (env[row][col] == 'a') break;
            if (env[row][col] == 'O') {cnt++;}
            row--;
        }

        
        
    }


    cout << cnt << endl;




}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}