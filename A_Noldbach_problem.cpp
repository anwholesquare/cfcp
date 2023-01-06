#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;



bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}
int status[(1000/32)+2];
vector<int> sieve(int N)
{
	 int i, j, sqrtN; 
     
     sqrtN = int( sqrt( N ) );
     vector<int> primes;
     primes.pb(2);
     for( i = 3; i <= sqrtN; i += 2 ) 
     {
		 if( Check(status[i>>5],i&31)==0)
		 {
	 		 for( j = i*i; j <= N; j += (i<<1) )
			 {
				 status[j>>5]=Set(status[j>>5],j & 31)   ;
	 		 }
             
		 }
	 }

     for(i=3;i<=N;i+=2) if( Check(status[i>>5],i&31)==0) primes.pb(i);
     return primes;
}

void solve () {
    int n, k;
    cin >> n >> k;
    vector<int> primes = sieve(n);
    map <int, int> fprime;
    for (int i =0; i< primes.size(); i++) {
        fprime[primes[i]] = 1;
    }
    for (int i =0; i <primes.size()-1; i++) {
        int a = primes[i];
        int b = primes[i+1];
        if (fprime[a+b+1] == 1) k--;
    }
    if (k <= 0) {
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }
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


