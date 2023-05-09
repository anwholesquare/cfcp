#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n, x1,y1,x2,y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    ll k = n/2;
    x1 = (x1 > k) ? (k - (x1%(k+1))) : x1;
    y1 = (y1 > k) ? (k - (y1%(k+1))) : y1;

    x2 = (x2 > k) ? (k - (x2%(k+1))) : x2;
    y2 = (y2 > k) ? (k - (y2%(k+1))) : y2;

    ll d1 = 1, d2 = 1;
    d1 = (x1 <= y1) ? x1 : y1;
    d2 = (x2 <= y2) ? x2 : y2;
    //cout << "(" << x1 << "," << y1 << ")" << ", (" << x2 << "," << y2 << ")" << endl;
    cout <<  abs(d1-d2) << endl; 

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