#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;



void solve () {
    ll x, y, z;
    cin >> x >> y >>z;
    string y1 = "YES\n";
    string n = "NO\n";
    if (x == y && z >= x) cout << y1;
    else if (x == z &&  y >= x) cout << y1;
    else if (y == z &&  x >= y ) cout <<y1;
    else {
        cout << n;
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