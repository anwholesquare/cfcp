#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n, r,b;
    cin >> n >> r >> b;
    bool start = 1;
    int mod = ceil(r / (float)(b+1));
    
    int cnt = (r % (b+1) == 0) ? (b+1) : (r%(b+1));
    int doer = (mod - 1 == 0) ? 1 : mod-1;
    //cout << "MOD: " << mod << endl << "CNT: " << cnt << endl;
    for (int i =0; i<n;) {
        if (start == 0) {cout << "B"; b--; start = 1;i++;}
        else if (start == 1) {
            if (cnt > 0) {
                for (int j =0; j<mod; j++) cout << "R";
                i+=(mod);
                cnt--;
            }else{
                for (int j =0; j<doer; j++) cout << "R";
                i+=(doer);
            }
            if (b > 0) start = 0;
        }
    }
    cout << endl;

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