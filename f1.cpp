#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;



void solve () {
    ll num;
    cin >> num;
    vector<ll> ans;

    int square_root = (int) sqrt(num) + 1;
    for (int i = 1; i < square_root; i++) { 
        if (num % i == 0&&i*i!=num) {
            ans.pb(i); ans.pb(num/i);
        }
        if (num % i == 0&&i*i==num)
            ans.pb(i);
    }

    //sort (all(ans));
    for (ll i = 0; i < ans.size()-1; i++) {
        cout << ans[i] << " ";
    }
    cout << ans[ans.size() - 1] << endl;
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