#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve () {
    long long n,q;
    cin >> n >> q;
    vector <long long> sugarLevel(n,0);
    vector<long long> prefixSumSugarLevel(n,0);
    ll sum = 0;
    for (int i =0; i <n;i++) {
        ll x; cin >> x; sugarLevel.push_back(x); sum+=x;
    }
    sort(sugarLevel.begin(), sugarLevel.end(), greater<ll>());
    prefixSumSugarLevel[0] = sugarLevel[0];
    for (int i =1; i <n;i++) {
        prefixSumSugarLevel[i] = sugarLevel[i] + prefixSumSugarLevel[i-1]; 
        //cout << prefixSumSugarLevel[i] << " ";
    }
    //cout << endl;
    while(q--) {
        ll x;
        cin >> x;
        if (x > sum) { cout << "-1" << endl; continue;}
        if (x == prefixSumSugarLevel[n-1]) {cout << n << endl; continue;}
        if (x < prefixSumSugarLevel[n-1] && x > prefixSumSugarLevel[n-2]) {
            cout << n << endl; continue;
        }
        if (x <= prefixSumSugarLevel[0]) {cout << 1 << endl; continue;}
        ll cnt = 1;

        ll high = n-1;
        ll low = 0;
        ll index = n-1;
        while (true) {
            ll mid = (high+low)/2;
            
            if (x > prefixSumSugarLevel[mid]) low = mid+1;
            else {
                if (x == prefixSumSugarLevel[mid]) {index = mid; break;}
                if (x >prefixSumSugarLevel[mid-1]) {index = mid; break;}
                high = mid;
            }
        }

        cout << index +1 << endl;

    }
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}