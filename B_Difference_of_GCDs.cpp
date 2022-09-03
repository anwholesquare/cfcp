#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
inline int gcd (int a, int b){return b ? gcd(b, a%b) : a;}
void solve() {
    
    ll n,l,q;
    cin >> n >> l >> q;
    vector<int> v;
    int range = q-l+1;
    
    for (int i= 1; i<=n; i++) {
        int x = (int)(l/i);
        x = i * x;
        int ai = (x < l) ? x + i : x;
        if (ai > q) {cout << "NO\n"; return;} 
        v.push_back(ai);   
    }
    cout << "YES\n";
    for (int i =0; i<n; i++) {
        //cout << gcd(i+1,v[i]) << " ";
        cout << v[i] << " ";
    }
    cout << endl;
    

}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }   
    return 0;
}