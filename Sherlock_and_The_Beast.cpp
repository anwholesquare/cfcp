#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

void solve () {
    int n;
    cin >> n;

    int x = 0,y =0;
    int g = gcd (3,5,x,y);
    if (n % g != 0) {cout << -1 << endl; return;}
    x  = x * (n/g);
    y = y * (n/g);
    
    int k =1;
    map<ll,ll> m;
    if (x > 0 && y > 0) m[x] = y;
    while (x + k * (5 / g) > 0){
        int xk = x + k * (5 / g);
        int yk = y - k * (3 / g);
        if (xk > 0 && yk > 0 ) {
            m[xk] = yk;
        }
        k += 1;
    }

    if (m.empty()) {cout << -1 << endl; return;}
    else {
        auto it = m.end();it--;
        cout << it->first << " " << it->second << endl;
        
    }


    
    cout << x << " " << y << endl;
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