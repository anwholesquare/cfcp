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
    int d = 0;
    for (int i=0; i<n;i++) {
        int x;
        cin >> x;
        if (x < 0) d++; 
    }
    int i;
    for (i=1; i<= (n-d); i++) {
        cout << i << " ";
    }
    i--;
    for (int j = 0; j<d;j++){
        i--;
        cout << i << " ";
    }
    cout << endl;
    int t = d;
    while (d != 0) {
        cout << "1 0 ";
        d--;
    }

    t = t*2;
    for (int m=1; m<=(n-t); m++) {
        cout << m << " ";
    } 
    cout << endl;
    
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