#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

vector<int> divisors [5*100000];
void divisor (int n) {
    for (int i=1; i<=n; i++) {
        for (int j =i; j <=n; j+=i) {
            divisors[j].pb(i);
        }
    }
}
void solve () {
    ll n, k;
    cin >> n >> k;
    ll sum = 0;
    for (int i=0; i< divisors[n].size(); i++) {
        if (divisors[n].at(i) % k != 0) sum += divisors[n].at(i);
    }
    cout << sum << endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    cin >> t;
    divisor(5*100000);
    while (t--) {
        solve();
    }
    return 0;
}