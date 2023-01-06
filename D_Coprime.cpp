#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

vector<ll> p = {
    2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997
};
map <int, bool> isPrime;
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}
bool coprime(int a, int b)
{  
    if (a == 1 || b == 1) return 1;
    if (isPrime[a] && isPrime[b] && a != b) {
        return 1;
    }
    return (gcd(a, b) == 1);
}
void solve () {
    ll n;
    cin >> n;
    vector<ll> v;
    for (int i =0; i<n; i++) {
        ll x;
        cin >> x;
        v.pb(x);
    }
    ll maxi = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if (coprime(v[n-1-i], v[n-1- j]))
                maxi = max( (ll) (2*n-i-j), maxi);

    
    
    if (maxi == 0) {
        cout << -1 << endl;
    } else {
        cout << maxi << endl;
    }

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;

    for (int i =0; i <p.size(); i++) {
        isPrime[p[i]] = 1;
    }
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}