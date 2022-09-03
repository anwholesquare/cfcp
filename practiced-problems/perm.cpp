#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;
string s;
static ll cnt = 0;
void perm (string &sp, ll k) {
    ll n = s.size();
    //cout << k << " " << sp << endl;
    if (k == n-1) {
        cnt++;
        cout << sp << endl;
        return;
    }   
    string tmp = sp;
    for (int i =0+k; i<n; i++) {
        swap(sp[k], sp[i]);
        perm(sp, k+1);
        sp = tmp;
    }
}


void solve () {
    cin >> s;
    perm(s, 0);
    cout << cnt << endl;

}

int main () {

    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}