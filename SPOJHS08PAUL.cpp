#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

int status[(10000000/32)+2];
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

int res[10000000];

void head() {
    sieve(10000000);
    memset(res, 0, sizeof(res));
    int cnt = 0;
    for (int i = 0; i*i < 10000000; i++) {
        int k = i*i;
        for (int j = 0; j*j*j*j < 10000000; j++) {
            int num = k + j*j*j*j;
            if (num > 10000000) break;
            if( isprime(num) ) {
                res[num] = 1;
            }
        }
    }

    for (int i =1; i <10000000; i++) res[i] += res[i-1];


}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    cin >> t;
    head();
    
    while (t--) {
        ll n;
        cin >> n;
        cout << res[n] << endl;
    }
    return 0;
}