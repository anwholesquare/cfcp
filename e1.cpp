#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    vector <ll> v;
    for (int i =0; i<n; i++) {
        ll x;
        cin >> x; v.pb(x);
    }
    sort(all(v));
    ll q;
    cin >> q;
    vector<ll>::iterator it;
    while (q--) {
        ll x, k;
        cin >> x >> k;
        
        ll ans = 0;
        it = upper_bound(all(v), x-1);

        ll index = (it - v.begin());
        if (it != v.end()) {
            ans += (v.size() - index );
            index = (it - v.begin()) - 1;
        }else {
            index = v.size()-1;
        }

        for (int i = index; i >= 0; i--) {
            //if (v[i] >= x) {ans++; continue;};
            if ((v[i] + k) < x) break;
            else {
                k = k - (x - v[i]);
                if (k < 0) {
                    break;
                }
                ans++;
            }
        }

        cout << ans << endl;

    }
    

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    solve();
    return 0;
}