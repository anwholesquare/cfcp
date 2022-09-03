#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;
vector<ll> sq;
vector<ll>::iterator it;

void sqmk (int n) {
    ll r = 0;
    for (int i =0; r <=n; i++) {
        r = i*i;
        sq.push_back(r);
    }
}

int lowerBound (int n) {
    return *lower_bound(sq.begin(), sq.end(), n);
}

void solve () {
    ll n;
    cin >> n;
    
    ll term = 0;
    ll i = n-1;
    ll need = lowerBound(i) - i;
    ll high = n;
    vector<ll> v;
    while (term < n) {
        for (int k = need; k < high; k++) {
            v.push_back(k);
        }
        i =  i - (high-need);
        high = need;
        need = lowerBound(i) - i;
        term = v.size();
    }

    for (int k =v.size()-1; k >=0; k--) {
        cout << v[k] << " ";
    }
    cout << endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    cin >> t;
    sqmk(100000);
    while (t--) {
        solve();
    }
    return 0;
}