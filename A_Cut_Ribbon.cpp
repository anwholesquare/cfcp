#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

int gcd (int a, int b) { return (b) ? gcd(b, a%b) : a; }
int lcm (int a, int b) { return (a*b)/gcd(a,b); }
void solve () {
    ll n;
    cin >> n;
    vector<int> v;
    for (int i =0; i<3; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    int cnt = 0;
    sort(v.begin(), v.end());
    ll ans = 0;
    if (n % v[0] == 0) {cout << n/v[0] << endl; return; }
    int maxres = 0;
    for (int i = 0; v[2] * i <= n; i++) {
        for (int j =0; (v[2]*i + v[1] *j) <= n; j++) {
            int bres = i*v[2] + j*v[1];
            int check = (n - bres) % v[0];
            int k = (n- bres) / v[0];
            if (check == 0 && (i+j+k) > maxres) {
                maxres = i+j+k; break;
            }
        }
    }

   cout << maxres << endl;
    

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