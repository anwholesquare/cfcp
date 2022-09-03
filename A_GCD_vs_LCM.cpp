#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

int gcd (int a, int b) {
    return b ? gcd (b, a%b): a;
}

int lcd (int a, int b) {
    return a*b/gcd(a,b);
}

void solve () {
    ll n;
    cin >> n;
    //cout <<  gcd (1,n-3) << "=" << lcd(1,1) << " ";
    cout << 1 << " " << n-3 << " " << 1 << " " << 1 << endl;

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