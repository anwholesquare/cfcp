#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

vector<bool> segsieve (int l, int r) {
    int rsqrt = sqrt(r);
    vector<bool> is_prime(rsqrt+2, 1);
    vector<int> primes;
    for (int i = 2; i <= rsqrt; i++) {
        if (is_prime[i]) {
            primes.pb(i);
            for (int j = i*i; j <= rsqrt; j+= i) {
                is_prime[j] = 0;
            }
        }
    }
    vector<bool> primeR (r-l+1, 1);
    for (int i : primes) {  
        int k = (l/i) * i;
        if ( k < l) k += i;
        for (int j = k; j <= r; j+=i) primeR[j-l] = 0;
    }


    return primeR;
}

void solve () {
    ll n;
    cin >> n;


}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    cin >> t;

    segsieve(1, 10e7);
    while (t--) {
        solve();
    }
    return 0;
}