#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;


void swap (char &i, char &j) {
    char temp = i;
    i = j; j = temp;
}
void solve () {
    string n;
    cin >> n;
    int len = n.size();
    ll m;
    cin >> m;
    while (m--) {
        ll x;
        cin >> x;
        x--;
        ll end = len -1 -x;
        //cout << s << endl;
        for (int j =0; j < (end-x+1)/2; j++) {
            // << n[x+j] << " " << n[end-j] << endl;
            swap(n[x+j], n[end-j]);
        }

    }

    cout << n << endl;

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