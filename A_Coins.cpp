#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

int extendedEuclidean(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = extendedEuclidean(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return d;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

bool canRepresent(int n, int k) {
    int g = gcd(2, k);
    if (n % g != 0) return false;

    int a = 2 / g;
    int b = k / g;
    int x0, y0;
    int d = extendedEuclidean(a, b, x0, y0);

    int x = x0 * (n / g);
    int y = y0 * (n / g);
    
    return true;
}



void solve () {
    ll n, k;
    cin >> n >> k;
    if (!canRepresent(n, k)) {
        cout << "NO" << endl;
    }else {
        cout << "YES" << endl;
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