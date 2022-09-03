#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void swap (vector<ll> &v, int i, int j) {
    if (v[j] > v[i]) {
        ll temp = v[i];
        v[i] = v[j];
        v[j] = temp; 
    }
}
void solve () {
    ll n;
    cin >> n;
    vector<ll> v;
    int starting = n%2 + 1;
    for (int i =0; i<n;i++) {
        ll x;cin >> x; v.push_back(x);
        if (i == starting) {
            swap(v,i,i-1);
            starting = starting + 2;
        }
    }
    int flag = 0;
    for (int i = 0; i <(n-1); i++) {
        //cout << v[i] << " ";
        if (v[i] <= v[i+1]) {continue;}
        flag = 1; break;
    }

    if (flag) cout << "NO\n";
    else cout << "YES\n";

}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
 }