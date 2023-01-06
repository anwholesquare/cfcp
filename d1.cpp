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
    ll k;
    cin >> k;
    vector<ll> aust, ewu;
    for (int i =0; i <n; i++ ){
        ll x;
        cin >> x;
        ewu.pb(x % k);
    }
    for (int i =0; i <m; i++) {
        ll x;
        cin >> x;
        aust.pb(x % k);
    }
    ll bonds = 0;
    

    sort(all(ewu));
    vector<ll>::iterator it;
    for (int i =0; i< aust.size() && ewu.size() != 0; i++) {
        ll x = aust[i];
        if (x == 0 && ewu[0] == 0) {
            ewu.erase(ewu.begin() + 0);
            bonds++;
            continue;
        }
        
        it = lower_bound(all(ewu), k-x);
        if (it == ewu.end()) {
            continue;
        }else{
            if (*it == (k-x)) {
                ewu.erase(ewu.begin() + (it - ewu.begin()));
                bonds++;
            }
        }
        
    }

    cout << bonds << endl;

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
