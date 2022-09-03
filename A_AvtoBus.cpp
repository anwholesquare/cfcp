#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    if (n % 2 == 1 ) {
        cout << -1 << endl; return;
    }
    
    ll x = n;
    ll y = 0;

    ll min = 0;
    while ((n-6*y) % 4 != 0) {
        y++;
        if (n - 6*y < 0) {
            cout << -1 << endl; return;
        }
    }
    x = (n-6*y)/4;
    min = x + y;


    y = n;
    x = 0;

    ll max = 0;
    while ((n-4*x) % 6 != 0) {
        x++;
        if (n - 4*x < 0) {
            cout << -1 << endl; return;
        }
    }

    y = (n-4*x)/6;
    max = x + y;

    cout << max << " " << min << endl;

}

int main () {

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}