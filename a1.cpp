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

    
    vector<ll> v;
    v.pb(1);
    v.pb(2);

    if (n == 1)  {cout << 1 << endl; return;}
    else{
        ll sum = 3;
        int k = n -2;
        while (k--) {
            v.pb(sum + 1);
            sum += (sum + 1);
        }
        for (int i =0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }

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