#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n, m;
    cin >> n >> m;
    vector<ll> v1, v2;
    for (int i =0; i <n; i++) {
        ll x;
        cin >> x;
        v1.pb(x);
    }

    for (int i =0; i<m-1; i++) {
        ll x;
        cin >> x;
        v1.pb(x);
    }

    ll p = 0;
    cin >> p;

    sort (all(v1), greater<ll>());
    ll sum = 0;
    for (int i =0; i<n-1; i++) {
        sum += v1[i];
    }

    sum += p;
    



    

    cout << sum << endl;



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