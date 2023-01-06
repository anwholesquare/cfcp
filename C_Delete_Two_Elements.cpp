#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

int C(int n, int k) {
    double res = 1;
    for (int i = 1; i <= k; ++i)
        res = res * (n - k + i) / i;
    return (int)(res + 0.01);
}

void solve () {
    ll n, x;
    cin >>n;
    map <ll, int> f;
    ll sum = 0;
    vector<ll> v;
    for (int i=0; i<n; i++) {
        cin >> x;
        f[x]++;
        v.pb(x);
        sum += x;
    }
    ll dsum = 2 * sum;
    if (dsum % n  == 0) {
        dsum = dsum / n;
        ll p = 0, ai = 0, aj = 0, m = 0;
        for (int i =0; i<n; i++) {
            ai = v[i];
            aj = dsum - ai;
            m = f.count(aj);
            if (ai == aj) p--;
            if (m == 1) p+= f[aj]; 
        }
        cout << (p/2) << endl;
    }else {
        cout << 0 << endl;
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