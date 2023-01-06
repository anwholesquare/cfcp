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
    ll o = 0 ,e = 0; 
    ll mini = INT_MAX, mini1 = INT_MAX;
    for (int i=0; i< n; i++) {
        ll k;
        cin >> k;
        if (k % 2 == 0) {
            e++;
            ll a = 0;
            while (k % 2 == 0) {
                k>>=1;
                a++;
            }
            mini = min(a, mini);
        }else {
            o++;
            ll a = 0;
            while ( k % 2 == 1) {
                k>>=1;
                a++;
            }
            mini1 = min(a, mini1);
        } 
    }

    if (o % 2 == 0) { cout << 0 << endl; return;} 
    else {
        cout << min(mini,mini1) << endl;
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