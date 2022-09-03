#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;



void solve () {
    ll n;
    cin >> n;
    map <string, int> mpr;
    vector<string> v[3];

    int p[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++) {
        int k = n;
        while (k--) {
            string s;
            cin >> s;
            v[i].pb(s);
            mpr[s]++;
        }
    }

    for (int  i =0; i<3; i++) {
        for (int j = 0; j < n; j++) {
            if (mpr[v[i].at(j)] == 1) p[i] += 3;
            else if (mpr[v[i].at(j)] == 2) p[i] += 1;
        }
    }

    cout << p[0] << " " << p[1] << " " << p[2] << endl;

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