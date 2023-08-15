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
    vector<ll> v;
    ll sum = 0, cnt = 0;
    bool flag = 0;
    ll x;
    for (int i=0; i<n; i++) {
        
        cin >> x;
        sum += abs(x);
        
        if (flag && x > 0) {
                cnt++;
        }

        if (x < 0) {
            flag = 1;
        }else {
            if (flag && x!= 0)flag = 0;
        }
    }
    if (flag) cnt++;
    cout << sum << " " << cnt << endl;

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