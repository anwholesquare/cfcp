#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    if (n <= 4) {
        if (n == 1) {
        cout << 1 << endl; return;
        }
        if (n == 2) {
            cout << 1 << " " << 2 << endl; return;
        }
        if (n == 3) {
            cout << "2 1 3 \n"; return; 
        }
        if (n == 4) {
            cout << "2 1 3 4\n"; return;
        }
    }
    

    if (n % 2 == 0) {
        for (int i = n-2; i >= 1; i--) {
            cout << i << " ";
        }
        cout << n-1 << " "  <<  n << endl; return;
    }

    else {
        for (int i =  n-2; i >= 4; i-- ) {
            cout << i << " ";
        }
        cout << 2 << " " << 3 << " " << 1 << " " << n-1 << " " << n << endl;
        return;
    }
   

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