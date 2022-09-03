#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;


void solve () {
    ll n, m;
    cin >> n >> m;
    
    vector<ll> v;
    map <ll, bool> booked;
    for (int i =0; i<n; i++) {

        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<ll>());
    int back = m - v[0];
    int front = 0;

    for (int i =0; i<v.size(); i++) {
        //cout << front << endl;
        if (front >= back) {cout << "NO\n"; return;}
        front += v[i] + 1;
    }
    cout << "YES\n";
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