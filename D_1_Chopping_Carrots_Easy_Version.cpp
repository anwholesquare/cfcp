#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    int n, k;
    cin >> n >> k;
    vector<int> v (n, 0), vmax (n,0) , vmin (n,0);
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i =0; i<n; i++) {
        cin >> v[i];
        vmin[i] = (v[i]/k);
        if (v[i] < mini) mini = v[i];
        if (v[i] > maxi) maxi = v[i];
    }
    sort(vmin.begin(), vmin.end());

    cout << vmin[n-1] - vmin[0] << endl;

    // if (maxi < k) {
    //     cout << 0 << endl;
    // }
    

    // for (int i =0; i<n;i++) {

    // }


    // ll ans = (maxi/k) - (mini/1);
    // if (ans < 0) {
        
    // }else{
    //     cout << ans << endl;
    // }
    

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