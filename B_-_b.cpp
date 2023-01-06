#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

int gcd (int a, int b) {
    return b ? gcd (b, a%b) : a;
}
void solve () {
    ll g, l;
    cin >> g >> l;
    if (gcd (g,l) == g) {
        cout << g << " " << l << endl;
    }else {
        cout << -1 << endl;
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