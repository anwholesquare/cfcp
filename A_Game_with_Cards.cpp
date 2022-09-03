#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve () {
    int n;
    cin >> n;
    vector<ll> a,b;
    
    for (int i = 0; i<n;i++) {
        ll x; cin >> x; a.push_back(x);
    }

    int m;
    cin >> m;

    for (int i = 0; i<m;i++) {
        ll x; cin >> x; b.push_back(x);
    }

    sort(a.begin(), a.end(), greater<ll>());
    sort(b.begin(), b.end(), greater<ll>());
    int i = 0;
    //cout << a[i] << " " << b[i] << endl;
    if (a[i] == b[i]) {cout << "Alice\nBob\n"; return;}
    else if (a[i] > b[i]) {cout << "Alice\nAlice\n"; return;}
    else {cout << "Bob\nBob\n"; return;}


}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}