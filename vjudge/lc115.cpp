#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    string str = "Register";
    string tmp;
    vector< pair< ll, int> > v;
    while ( str != "#") {
        cin >> str;
        if (str == "#") break;
        int q, p;
        cin >> q >> p;
        v.push_back(mp(p,q));
        getline(cin, tmp);
    }
    //getline(cin, tmp);
    int r;
    cin >> r;
    int l = v.size();
    for (int i =0; i < l; i++) {
        for (int j = 2; j <=r; j++) {
            v.pb(mp(v[i].first*j, v[i].second));
        }
    }
    sort(all(v));
    for (int i =0; i <r;i++) {
        cout << v[i].second << endl;
    }
    return;

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