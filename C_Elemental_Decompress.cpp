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
    vector<ll> v(n+1);
    map<ll,ll> f;
    for (int i=1; i<=n; i++) { cin >> v[i]; f[v[i]]++;}
    vector<ll> p(n+1, 0), q(n+1, 0);
    for (int i = 1; i<=n; i++) {p[i]=i; q[i]= i;}
    vector<pair<ll,ll>> d;
    for (int i=1; i<=n; i++) {
        if (f[v[i]] == 1) {
            d.pb(mp(v[i],0));
            p[v[i]] = 0;
            f[v[i]]--;
        }
        else if (f[v[i]] == 2) {
            d.pb(mp(0,v[i]));
            q[v[i]] = 0;
            f[v[i]]--;
        }else {
            cout << "NO\n"; return;
        }
    }

    sort(all(d));
    ll minP = -1, minQ = -1;
    for (int i = 1; i<=n; i++) {if (p[i] != 0) { minP = i; break;}}
    for (int i = 1; i<=n; i++) {if (q[i] != 0) { minQ = i; break;}}
    map<ll,vector<ll>> f1, f2;
    for (int i =0; i<d.size(); i++) {
        if (d[i].first == 0) {
            
            if (minP > d[i].second) {cout << "NO\n"; return;}
            d[i].first = minP;
            f1[max(d[i].first, d[i].second)].pb(d[i].first);
            f2[max(d[i].first, d[i].second)].pb(d[i].second);
            for (int i = minP+1; i<=n; i++) {if (p[i] != 0) { minP = i; break;}}
        }
        else {
            if (minQ > d[i].first) {cout << "NO\n"; return;}
            d[i].second = minQ;
            f1[max(d[i].first, d[i].second)].pb(d[i].first);
            f2[max(d[i].first, d[i].second)].pb(d[i].second);
            for (int i = minQ+1; i<=n; i++) {if (q[i] != 0) { minQ = i; break;}}
        }
    }
    cout << "YES\n";
    for (int i =1; i<=n; i++) { 
        if (f1[v[i]].size() == 2) {
            cout << f1[v[i]].back() << " ";
            f1[v[i]].pop_back();
        }else {
            cout << f1[v[i]][0] << " ";
        }
    }
    cout << endl;
    for (int i =1; i<=n; i++) { 
        if (f2[v[i]].size() == 2) {
            cout << f2[v[i]].back() << " ";
            f2[v[i]].pop_back();
        }else {
            cout << f2[v[i]][0] << " ";
        }
    }
    cout << endl;
    
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