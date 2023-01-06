#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;


int status[(1000000/32)+2];
bool checkbit(int N,int pos){return (bool)(N & (1<<pos));}
int setbit(int N,int pos){	return N=N | (1<<pos);}
bool isprime(int n) {
  if(n<2) return false;
	if(n==2) return true;
	if(n&1 && checkbit(status[n>>5],n&31)==0) return true;
	return false;
}
int primes[1000000];
int pcnt = 0;
void sieve(int N)
{
    memset(status, 0, sizeof(status));
    int sqrtN = int( sqrt( N ) );
    for(int i = 3; i <= sqrtN; i += 2 ) 
        if(checkbit(status[i>>5],i&31)==0)
            for(int j = i*i; j <= N; j += (i<<1) )
                status[j>>5]=setbit(status[j>>5],j & 31);
    primes[pcnt] = 2; pcnt++;
    for(int i = 3; i <= sqrtN; i += 2 ) 
        if(checkbit(status[i>>5],i&31)==0) {
            primes[pcnt] = i; pcnt++;
        }
}
void solve () {
    ll n;
    cin >> n;
    if (n == 0) return;
    bool f = 1;
    for (int i =0; i < pcnt && primes[i]/2 <= n; i++) {
        if (isprime(n-primes[i])) {
            cout << n << ":" << endl << primes[i] << "+" << n-primes[i] << endl;
            f = 0; break;
        }
    }
    if (f) cout << n << ":" << endl <<  "NO WAY!" << endl;
    solve();
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    sieve(1000000);
    while (t--) {
        solve();
    }
    return 0;
}