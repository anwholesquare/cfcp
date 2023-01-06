#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n, a, b;
    cin >> n >> a >> b;
    vector<pair<ll,ll>> v;
    int k = n;
    int i = 0;
    while (k!=0) {
        if (i % 2 == 0) {
            if (a > 0) {v.pb(mp(1,0)); a--;}
            else if (b>0) {v.pb(mp(0,1)); b--;}
            else v.pb(mp(0,0));
        }else {
            if (b>0) {v.pb(mp(0,1)); b--;}
            else if (a > 0) {v.pb(mp(1,0)); a--;}
            else v.pb(mp(0,0));
        }
        i++;
        k--;
    }
    if (a>0){
        for (int i=0; i<n;i++){
            if ((v[i].first + a) != v[i].second) {
                v[i].first += a; a=0;break;
            }
            if (i == n-1) {
                v[i].first += a;a=0; break;
            }
        }
    }

    if (b>0){
        for (int i=0; i<n;i++){
            if ((v[i].first) != (v[i].second+b)) {
                v[i].second += b; b=0;break;
            }
            if (i == n-1) {
                v[i].second += b;b=0; break;
            }
        }
    }            
    
    int draw = 0;
    for (int i=0; i<n; i++) {
        if (v[i].first == v[i].second) draw++;
    }

    cout << draw << endl;
    for (int i=0; i<n; i++) {
        cout << v[i].first << ":" << v[i].second << endl;
    }


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