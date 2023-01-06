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
  if(n<2) return true;
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


int main () {
    sieve(2000);
    string str;
    while (cin>>str) {
        int len = str.length(), val=0;
        for(int i=0; i<len; i++){
            if(str[i] >= 'a' && str[i] <= 'z')
                val += str[i]-'a'+1;
            else if (str[i] >= 'A' && str[i] <= 'Z')
                val += str[i]-'A'+27;
        }
        if (isprime(val)) {
            cout << "It is a prime word." << endl;
        }else {
            cout << "It is not a prime word." << endl;
        }
    }
    return 0;
}