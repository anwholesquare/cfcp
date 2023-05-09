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
    ll k = 2;
    ll d = 2*n;
    for (int i =1; i<=n;i++) {
        if (i%2==0) {
            cout << k << " ";
            k+=2;
        }else {
            cout << d << " ";
            d-=2;  
        }
    }
    cout << endl;
    k = 1;
    d = n+1;

    for (int i =n+1; i<=2*n;i++) {
        if (i%2==1) {
            cout << k << " ";
            k+=2;
        }else {
            cout << d << " ";
            d+=2;  
        }
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