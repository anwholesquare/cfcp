#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;


const int MAXN = 1e5 + 5;

int n, k, f[MAXN], d[MAXN], p[MAXN];

bool isBalanced(int k) {
    sort(p + 1, p + n + 1, greater<int>());
    int sum = accumulate(p + 1, p + k + 1, 0);
    for (int i = k + 1; i <= n; i++) {
        if (p[i] * k < sum) return false;
    }
    return true;
}


void solve () {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> f[i] >> d[i];
        p[i] = f[i] * d[i];
    }
    int lo = 0, hi = n;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        if (isBalanced(mid)) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }
    cout << lo << endl;

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