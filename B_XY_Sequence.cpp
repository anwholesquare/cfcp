#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n, B, x, y;
    cin >> n >> B >> x >> y;

    ll sum = 0;
    ll prev = 0;
    ll curr = 0;
    for (int i =1; i <n+1; i++) {
        if ((prev + x) > B) {
            curr = prev - y;
            sum += curr;
            prev = curr;
            }
        else {
            
            curr = prev + x;
            sum += curr;
            prev = curr;
            
        }
        
    }
    cout << sum << endl;




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