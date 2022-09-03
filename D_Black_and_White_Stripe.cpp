#include <bits/stdc++.h>
using namespace std;

int maxB (vector<long long> &prefixSum, int i , int j){
    if (i==0) return prefixSum[j];
    else return (prefixSum[j] - prefixSum[i-1]);
    
}

void solve () {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<long long> prefixSum;
    for (int i = 0; i<n; i++) {
        int x = 0;
        if (s[i] == 'B') x= 1;
        if (i == 0) prefixSum.push_back(x);
        else prefixSum.push_back(x + prefixSum[i-1]);
        //cout << prefixSum[i] << " ";
    }
    //cout << endl;
    int max = 0;
    for (int i = 0; (i+k-1) < n; i++) {
        string sub = s.substr(i,k);
        //cout << sub << endl;
        int cnter = maxB(prefixSum,i, i+k-1);
        //cout << cnter << endl << endl;
        if (cnter == k) {cout << 0 << endl; return;}
        if (cnter > max) {max = cnter;}
    }

    cout << k -max << endl;
    
    
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();

    }

    return 0;
}