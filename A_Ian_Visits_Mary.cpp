#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

ll gcd (ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}
bool isValid ( ll a, ll b) {
    ll g = gcd(a,b);
    if (g > 1) return false;
    if (g == 1) return true; 
    return false;
}
void solve () {
    ll a, b;
    cin >> a >> b;
    if (isValid(a,b)) {
        cout << 1 << endl;
        cout << a << " " << b << endl;;
    }else {
        cout << 2 << endl;
        cout << a-1 << " " << 1 << endl;
        cout << a << " " << b << endl;
        // for (int i = 1; i<= 1e9; i++) {
        //     if (isValid(a-1,i) && isValid(a-1,b-i)) {
        //         cout << a-1 << " " << i << endl;
        //         cout << a << " " << b << endl;
        //         return;
        //     }
        // }
        // for (int i = 1; i<=1e9; i++) {
        //     if (isValid (i,b-1) && isValid(a-i,b-1)) {
        //         cout << i << " " << b-1 << endl;
        //         cout << a << " " << b << endl;
        //         return;
        //     }
        // }
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