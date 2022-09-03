#pragma GCC optimize("Ofast,unroll-loops") 
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, q;
    cin >> n >> q;
    vector <long long> a;
    a.push_back(0);
    for (int i =0; i < n; i++) {
        int r;
        cin >> r;
        a.push_back(r);
    }
    sort(a.begin()+1, a.end());
    reverse(a.begin()+1, a.end());
    for (int i = 1; i <= n; i++) {
        a[i] = a[i] + a[i-1];
        //cout << a[i] << " ";
    }
    while (q--) {
        int x, y;
        cin >> x >> y;
        cout << a[x] - a[x-y]  << endl;
    }

    return 0;
}