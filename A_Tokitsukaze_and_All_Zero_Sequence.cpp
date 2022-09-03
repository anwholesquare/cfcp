#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve () {
    ll n;
    cin >> n;
    set<int> matcher;
    int nonZeroElement = 0;
    bool isZeroThere = 0;

    for (int i =0; i<n; i++) {
        int x; cin >> x;
        if (x == 0) isZeroThere = 1;
        else{
            nonZeroElement++;
        }
        matcher.insert(x);
    }
    ll ans = 0;
    if (isZeroThere) {
        ans += nonZeroElement; 
    }
    else if (matcher.size() == n) {
        nonZeroElement--;
        ans += 1 + 1 + nonZeroElement;
    }else{
        nonZeroElement--;
        ans += 1 + nonZeroElement;
    }
    cout << ans << endl;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();

    }
    return 0;
}