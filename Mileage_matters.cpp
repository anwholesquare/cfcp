#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    double n, x, y, a, b;
    cin >> n >> x >> y >> a >> b;
    double resP = (n/(a)) * x;
    double resD = (n/b) * y;
    if (resP < resD) cout << "PETROL\n";
    else if (resD < resP) cout << "DIESEL\n";
    else cout << "ANY\n"; 

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