#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve (int t) {
    ll x, y;
    cin >> x >> y;
    ll n, k;
    cin >> n >> k;
    map <ll, vector< pair <ll, pair<ll,ll> > > > f;
    ll xi, yi;
    ll index = 1;
    ll distance = 0;
    ll r = n;
    while(r--) {
        cin >> xi >> yi;
        distance = ((x-xi) * (x-xi)) + ((y-yi) * (y-yi));
        
        f[distance].pb(mp(index, mp(xi,yi)));
        index++;
    }

    if (k > f.size()) {
        cout << "Case " << t << ": " << -1 << endl; return;
    }else{
        vector< pair <ll, pair<ll,ll> > > v;
        for (auto it = f.rbegin(); it != f.rend(); it++) {
                v = it->second;
                if (k ==0) {break;}
                if ((k - (ll) v.size()) > 0) { k = k -  v.size(); continue;}
                sort (all(v));
                for (int i=0; i < v.size(); i++) {
                    // cout << k << ", " << it->first << ": ";
                    // cout << v[i].first << " (" << v[i].second.first << ", " << v[i].second.second << ")" << endl;
                    k--;
                    if (k ==0) { cout << "Case "<< t << ": "<<  v[i].first << endl; return;}
                }

        }
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    cin >> t;
    int i =1;
    while (t--) {
        solve(i);
        i++;
    }
    return 0;
}