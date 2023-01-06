#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;


bool checkbit( int N, int pos) { return N & (1 << pos);}
int setbit (int N, int pos) { return N = N | (1 << pos);}
int status [(10000000/32) + 2];
vector<ll> prime;
vector<ll> primes;
void sieve (int N) {
    int lim = sqrt(N);
    memset(status, 0, sizeof(status));
    for (int i =3; i<= lim; i+=2) {
        if (checkbit(status[i>>5], i&31) == 0) {
            for (int j =i*i; j<=N; j+=(i<<1)) {
                status[j>>5] = setbit(status[j>>5], j&31);
            }
        }
    }
    primes.pb(0);
    primes.pb(2);
    prime.pb(0);
    prime.pb(2);
    for (int i=3; i<=N; i+=2) {
        if (checkbit(status[i>>5], i&31) == 0) {
            prime.pb(i);
            primes.pb(i + primes[primes.size()-1]);
        }   
    }


}
pair<int,int> findRange(vector<ll> a, int k) { 
    int n = a.size();
	int l = -1, r = n;
	while(r - l > 1) {
			int m = (l + r) / 2;
		if(k < a[m]) {
			r = m; 
		} else {
			l = m;
		}
	}
    return make_pair(l,r); 
}
void solve () {
    int n;
    cin >> n;
    pair<int,int> p2 = findRange(prime, n);
    int end = 0;
    end = p2.first;
    cout << primes[end] - primes[0] << endl;
}


int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    cin >> t;
    
    sieve(10000000);
    while (t--) {
        solve();
    }
    return 0;
}