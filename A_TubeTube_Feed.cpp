#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

struct node {
    ll d,e,id;
    node (ll d, ll e, ll id) {
        this->d = d;
        this->e = e;
        this->id = id;
    }
};

bool cmp (node a, node b) {
    if (a.d == b.d) return false;
    return a.d < b.d;
}
void solve () {
    ll n,t;
    cin >> n >> t;
    vector<node> v;
    for (int i =0; i<n; i++) {
        ll x;
        cin >> x;
        v.pb(node(x,0,i));
    }

    for (int i =0; i<n; i++) {
        ll x;
        cin >> x;
        v[i].e = x;
    }

    sort(v.begin(), v.end(), cmp);
    
    ll ans = -1;
    ll me = 0;
    for (int i=0; i<n; i++) {
        ll d = v[i].d;
        ll e = v[i].e;
        ll id = v[i].id;
        if ((d+id) <= t) {
            if (me < e) {
                me = e;
                ans = id + 1;
            }
        }
    }

    cout << ans << endl;
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