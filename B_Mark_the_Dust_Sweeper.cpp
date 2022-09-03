#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solver (vector<ll> &v, int i, int j) {
    v[i] = v[i] - 1;
    v[j] = v[j] + 1;
}
void solve () {
    ll n;
    cin >> n;
    vector<ll> v;
    ll firstPositiveIndex = -1;
    for (ll i =0; i< n;i++) {
        
        ll x; cin >> x; v.push_back(x);
        if (x > 0 && firstPositiveIndex == -1) firstPositiveIndex = i; 
    }
    if (firstPositiveIndex == -1 || firstPositiveIndex == (n-1)) {
        cout << 0 << endl; return;
    }
    ll cnt = 0;
    
    
    for (ll i =firstPositiveIndex; i< n-1;i++) {
        //cout <<  v[i] << " ";
        cnt += v[i];
        if (v[i] == 0) cnt++;
    }
    cout << cnt << endl;

    
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}