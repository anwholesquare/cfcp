#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    
    ll px = 0, py = 0, nx = 0, ny = 0;

    for (int i =0; i <n; i++) {
        ll x, y;
        cin >> x >> y;
        if (x == 0) {
            if (y >= 0) {py = max(y,py);}
            else{ny = max(-1*y,ny);}
        }else{
            if (x >=0) {px = max(x,px);}
            else {nx = max(-1*x,nx);}
        }
    }
    
    cout << (px+nx) * 2 + (py+ny) * 2 << endl;
   
    //cout << sum1 + sum << endl; 

    

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