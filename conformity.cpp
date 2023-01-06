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
    while (cin >> n) {
        if (n == 0) return;
        map <string, ll> f;
        
        for (int i =0; i<n; i++) {
            vector<int> v;
            for (int j = 1; j <=5; j++) {
                int x;
                cin >> x;
                v.pb(x);
            }
            sort(all(v));
            string s ="";
            for (int k=0; k<5; k++) {
                s+= to_string(v[k]);
            }
            f[s]++;
        }

        int max = 0;
        for (auto it = f.begin(); it != f.end(); it++) {
            if (it->second > max) {max = it->second;}
        }
        int res = 0;
        for (auto it = f.begin(); it != f.end(); it++) {
            if (it->second == max) {res+=max;}
        }

        cout << res << endl;
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