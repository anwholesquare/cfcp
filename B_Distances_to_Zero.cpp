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
    vector<ll> in;
    for (ll i = 0; i<n; i++) {
        ll x;
        cin >> x;
        if (x == 0) in.push_back(i);
    }
    ll k = 0;
    ll avail = in.size()-1;
    ll prev = in [k]; 
    k++;
    ll next = (k > avail) ? in [avail] : in[k];
    //cout << next << endl;
    for (ll i =0; i<n; i++) {
        if (i == next+1) {  
            prev = next;
            k++;
            next = (k > avail) ? in [avail] : in[k];
        }
        
        cout << min(abs(prev-i), abs(next-i)) << " ";
    }
    cout << endl;

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