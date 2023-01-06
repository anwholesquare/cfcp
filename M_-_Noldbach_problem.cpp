#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

int status[(1000/32)+2];
bool checkbit(int N,int pos){return (bool)(N & (1<<pos));}
int setbit(int N,int pos){	return N=N | (1<<pos);}
bool isprime(int n) {
  if(n<2) return false;
	if(n==2) return true;
	if(n&1 && checkbit(status[n>>5],n&31)==0) return true;
	return false;
}
void sieve(int N)
{
    memset(status, 0, sizeof(status));
    int sqrtN = int( sqrt( N ) );
    for(int i = 3; i <= sqrtN; i += 2 ) 
        if(checkbit(status[i>>5],i&31)==0)
            for(int j = i*i; j <= N; j += (i<<1) )
                status[j>>5]=setbit(status[j>>5],j & 31);
}

void solve () {
    
    ll n, k;
    cin >> n >> k;
    sieve (1000);
    vector<int> prime;
    prime.pb(2);
    for(int i = 3; i <= n; i += 2 ) 
        if(checkbit(status[i>>5],i&31)==0)
            prime.pb(i);

    for (int i=1; i<prime.size() && prime[i] + prime[i-1] + 1 <= n; i++) {
        int num = prime[i] + prime[i-1] + 1;
        if (isprime(num)) { k--;}
    }
    if (k <= 0 )cout << "YES\n";
    else cout << "NO\n";
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    solve();
    return 0;
}