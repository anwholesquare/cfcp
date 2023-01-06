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
    int n;
    while (cin>>n) {
        if (isprime(n)) {
            int k = n;
            int  reversed_number = 0, remainder;
            while(n != 0) {
                remainder = n % 10;
                reversed_number = reversed_number * 10 + remainder;
                n /= 10;
            }
            if (reversed_number != k && isprime(reversed_number)) cout << k << " is emirp." << endl;
            else cout << k << " is prime." << endl; 
 
        }else {
            cout << n << " is not prime." << endl;
        }
    }

}

int main () {
    sieve(1000000);
    solve();
    return 0;
}