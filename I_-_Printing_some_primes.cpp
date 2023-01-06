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
int status [(100000000/32) + 2];
void sieve (int N) {
    int lim = sqrt(N);
    cout << 2 << endl;
    memset(status, 0, sizeof(status));
    for (int i =3; i<= lim; i+=2) {
        if (checkbit(status[i>>5], i&31) == 0) {
            for (int j =i*i; j<=N; j+=(i<<1)) {
                status[j>>5] = setbit(status[j>>5], j&31);
            }
        }
    }
    int cnt = 1;
    for (int i=3; i<=N; i+=2) {
        if (checkbit(status[i>>5], i&31) == 0) {
            cnt++;
            if (cnt % 100 == 1) cout << i << endl;
        }   
    }

}


int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    sieve(100000000);
    return 0;
}