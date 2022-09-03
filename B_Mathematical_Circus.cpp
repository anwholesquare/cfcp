#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n, k;
    cin >> n >> k;
    if (k == 0 || k % 4 == 0) {cout << "NO\n"; return;}
    cout << "YES\n";
    for (int i =1; i<=n; i+=2) {
        if ((i+k)*(i+1) % 4 == 0) {
            cout << i << " " << i+1 << endl;
        } else{
            cout << i+1 << " " << i << endl;
        }
    }

    //cout << endl;

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