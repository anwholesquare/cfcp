#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

bool checkbit(int N,int pos){return (bool)(N & (1<<pos));}
int setbit(int N,int pos){	return N=N | (1<<pos);}
vector<int> sieve(int N)
{
    int status[(N/32)+2];
    memset(status, 0, sizeof(status));
    int i, j, sqrtN; 
    sqrtN = int( sqrt( N ) );
    vector<int> primes;
    if (N >= 2) primes.pb(2);
    for( i = 3; i <= sqrtN; i += 2 ) 
    {
        if( checkbit(status[i>>5],i&31)==0)
        {
            for( j = i*i; j <= N; j += (i<<1) )
            {
                status[j>>5]=setbit(status[j>>5],j & 31)   ;
            }
        }
    }
    for(i=3;i<=N;i+=2) if( checkbit(status[i>>5],i&31)==0) primes.pb(i);
    return primes;
}
vector<int> segsieve(int l, int r) {
    int rsq = sqrt (r);
    vector<int> p = sieve(rsq);
    vector<int> primes (r-l+1, 1);
    for (int i : p) {
        int k = (l/i) * i;
        if (k < l) k += i;
        for (int j = k; j <= r; j+=i) primes[j-l] = 0; 
    }
    vector<int> rangePrime;
    int pos = lower_bound(all(p), l) - p.begin();
    for (int i =pos; i<=p.size(); i++) {
        rangePrime.pb(p[i]);
    }
    for (int i =max(l,2); i<primes.size(); i++) if (primes[i] == 1) {rangePrime.pb(i+l);}
    return rangePrime;
}

void solve () {
    ll l, r;
    cin >> l >> r;
    vector<int> p = segsieve(l, r);
    for (int i=0; i<p.size(); i++) {
        cout << p[i] << " ";
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