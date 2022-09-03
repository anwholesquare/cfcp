#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve () {
    ll m;
    cin >> m;
    ll digit = floor(log10(m));
    ll sum = pow(10, digit);
    cout << m  - sum << endl;

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case = 1;
    cin >> test_case;
    while (test_case--) {
        solve();
    }

    return 0;
}