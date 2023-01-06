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
    ll d = n >> 1;
    if ( n%2 == 0) {
        cout << "YES" << endl;
        for (int i=0; i <n/2;i++) {
            cout << "1 -1 ";
        }
        cout << endl;
    }else if (n == 3) {
        cout << "NO\n";
    }else {
        cout << "YES\n";
        ll res = (n >> 1);
        for (int i =0;i<d; i++) {
            cout << 1 - res << " " <<  res << " ";
        }
        cout << 1 - res << endl;
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