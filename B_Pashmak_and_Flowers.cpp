#include <bits/stdc++.h>
#include <algorithm>
#include<numeric>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

ll gcd (ll a, ll b) { return b ? gcd(b, a%b) : a;}

ll ncr (ll n, ll r) {
    if (n - r < r) r = n - r;
    ll p = 1, k =1;
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            ll m = gcd(p, k);
            p /= m;
            k /= m;
            r--; n--;
        }
    }
    return p;
}
void solve () {
    ll n;
    cin >> n;
    vector<ll> v (n, 0);
    map <ll, ll> mp;
    for (int i =0; i<n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }
    ll maxi = *max_element(v.begin(), v.end());
    ll mini = *min_element(v.begin(), v.end());
    ll ans = (mp[mini] == n) ? ncr(n,2) : mp[mini] * mp[maxi];
    cout << maxi - mini  << " " << ans << endl;
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