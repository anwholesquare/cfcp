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

int main () {
    vector<int> v = sieve (100000000);
    for (int i =0; i<v.size(); i+=100) {
        cout << v[i] << endl;
    }
    return 0;
}