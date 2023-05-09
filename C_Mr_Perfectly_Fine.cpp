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
    vector <pair<ll,string>> v;
    ll cmin = 1e14;
    for (int i =0; i<n; i++) {
        ll x;
        cin >> x;
        string s;
        cin >>s;
        if (s == "11") {
            cmin = min (cmin, x);
        }
        v.pb(make_pair(x,s));
    }
    sort(v.begin(), v.end());
    bool f = 0,s = 0;
    ll time = 0;
    for (int i=0; i <n; i++) {
        if (f == false && v[i].second[0] == '1') {
            time += v[i].first;
            f = true;
        }
        if (s == false && v[i].second[1] == '1') {
            time += v[i].first;
            s = true;
        }
        if (f && s) break;
    }
    if (f && s)
        cout << min (time, cmin) << endl;
    else if (cmin == 1e14) {
        cout << -1 << endl;
    }else {
        cout << cmin << endl;
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