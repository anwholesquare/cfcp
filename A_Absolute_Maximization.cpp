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
int clearbit(int N, int pos) {return N &= ~(1UL << pos);}
void solve () {
    int n;
    cin >> n;
    map <int, int> f0, f1;
    vector<int> v(n);
    for (int i =0; i<n;i++) {
        cin >> v[i];
        for (int j =0; j < 11; j++) {
            if (checkbit(v[i], j)) {
                f1[j]++;
            }else {
                f0[j]++;
            }
        }
    }
    int number = 0;
    for (int i = 0; i <11; i++) {
       if (f1[i] > 0) number += pow(2,i);
    }

    int m = 0;
    for (int i = 0; i<11; i++) {
        if (f0[i] > 0) {}
        else {
            m += pow(2,i);
        }
    }

    cout << number - m << endl;
    

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