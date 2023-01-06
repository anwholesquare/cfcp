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
    vector<pair<ll, ll>> v;
    for (int i =0; i<n; i++ ){
        ll x;
        cin >> x;
        v.pb(make_pair(x, i+1));
    }

    sort(all(v));
    cout << n-1 << endl;
    //cout << v[0].first << " ";
    for (int i =1; i<n; i++) {
        ll m = v[i-1].first + (v[i].first/v[i-1].first) * v[i-1].first;
        //cout << m << ": "; 
        ll x = abs(v[i].first - m);
        cout << v[i].second << " " << x  << endl;
        v[i].first += x;
        //cout << v[i].first << " ";
    }
    //cout << endl;
    

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