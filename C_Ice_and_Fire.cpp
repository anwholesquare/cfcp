#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    string s;
    cin >> s;

    vector<ll> v0(n-1, 0), v1(n-1, 0);
    for (int i=0; i <s.size(); i++) {
        int k = max(i-1, 0);
        if (s[i] == '1') {
            v1[i] = v1[k] + 1;
            v0[i] = v0[k]; 
        }else {
            v0[i] = v0[k] + 1;
            v1[i] = v1[k];
        }
    }
    for (int i=2; i<=n; i++) {
        ll cnt = 0;
        ll totalMatch = i-1;
        ll t0 = v0[totalMatch-1];
        ll t1 = v1[totalMatch-1];
        //cout << i << " " << t0 << " " << t1 << " ";
        for (int j = 1; j <= i; j++) {
            ll lower = j-1;
            ll upper = i - j;
            if (lower == 0) {
                if (s[i-2] == '0') cnt++;
            }
            else if (upper == 0) {
                if (s[i-2] == '1') cnt++;
            }
            else{
                if (s[i-2] == '1') {
                    //int lastT1 = 
                    if (upper <= 0) cnt++;
                }else {
                    lower = lower - t0;
                    if (lower <= 0)cnt++;
                }
                
            }
        }
        cout << cnt << " ";
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