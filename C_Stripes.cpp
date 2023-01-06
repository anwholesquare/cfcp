#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    string s[8];
    vector<int> cell;
    for (int i =0 ; i<8; i++) {
        cin >> s[i];
        if (s[i][0] == 'R') {
            cell.pb(i);
        }
    }
    bool flag = 0;
    for (int i =0; i <cell.size(); i++) {
        flag = 0;
        int k = cell[i];
        for (int j = 0; j <8; j++) {
            if (s[k][j] != 'R') {
                flag = 1; break;
            }
        }
        if (flag == 0) {
            cout << "R\n"; return;
        }
    }

    cout << "B\n";

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