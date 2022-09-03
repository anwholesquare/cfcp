#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

int gcd (int a, int b) {return (b) ? gcd(b, a%b) : a;} 
int lcm (int a, int b) {return (a*b)/ gcd (a,b);}

void solve () {
    ll n;
    cin >> n;
    ll sum = 0;
    if (n % 2 == 0) {
        for (int i =1; i<=n; i+= 2) {
            cout << " " << i+1 << " " << i;
        }
        cout << endl;
        return;
    }else{
        cout << 1;
        for (int i =2; i<=n; i+=2) {
            cout << " " << i+1 << " " << i;
        }
        cout << endl;
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