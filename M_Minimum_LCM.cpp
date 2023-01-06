#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

int gcd(int a, int b){
    return b ? gcd(b, a%b) : a;
}

int lcm (int a, int b) {
    return a*b/gcd(a,b);
}

ll egcd (ll a, ll b, ll *x, ll *y) {
    if (b ==0){
        *x = 1;
        *y = 0;
        return a;
    }
    ll x1, y1;
    ll gcd = egcd(b,a%b,&x1,&y1);
    *x = y1;
    *y = x1 - (a/b)*y1;
    return gcd;
}



void solve () {
    ll n;
    cin >> n;
    int lim = n/2;
    int minLCM = INT_MAX;
    int a = 1, b = n-1;

    
    for (int i=lim; i>=0; i--) {
        if (n % i == 0) {
            int l = lcm(i,n-i);
            if (l < minLCM) {
                minLCM = l;
                a = i;
                b = n-i;
            }
        }
    }

    cout << a << " " << b << endl;

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