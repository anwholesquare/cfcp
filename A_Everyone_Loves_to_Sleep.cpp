#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    ll h, m;
    cin >> h >> m;
    int mins = h * 60 + m;
    int lowestmins = 24 * 60;
    //vector<pair<ll, ll> > v (n);
    while(n--){
        int x, y;
        cin >> x >> y;
        int cmins = x * 60 + y;
        
        if (h == x && m > y) {
            int res = 24*60 - mins;
            res += cmins;
            if (res < lowestmins) lowestmins = res;
        }
        else if (h == x && m < y) {
            int res = y-m;
            if (res < lowestmins) lowestmins = res;
        }
        else if ( h > x) {
            int res = 24*60 - mins;
            res += cmins;
            if (res < lowestmins) lowestmins = res;
            
        }
        else{
            int res = cmins - mins;
            if (res < lowestmins) lowestmins = res;
        }
    }
    //cout << lowestmins << endl;
    cout << (lowestmins / 60) % 24 << " " << (lowestmins) % 60 << endl;



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