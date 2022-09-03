#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    vector<int> v (n, 0);
    int k =0;
    while (k < n) {
        cin >> v[k]; k++;
    }

    for (int i = n-1; i>0; i--) {
        for (int j = i-1; j >=0; j--) {
            if (v[i] < v[j]) {
                ll diff = v[j] - v[i];
                v[j] -= diff;
                v[i] += diff;
            }
        }
    }

    for (int i =0; i<n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    

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