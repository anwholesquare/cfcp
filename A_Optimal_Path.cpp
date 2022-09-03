#include <bits/stdc++.h>
using namespace std;

long long value (int i , int j, int m) {
    return (i-1) * m + j;
}

int main () {
    int t;
    cin >> t;
    while(t--) {
        long long n, m;
        cin >> n >> m;
        long long cost = (m)*(m+1)/2;
        cost += ((m + m*n) * n)/2;       
        cout << (cost-m) << endl;
    }

    return 0;
}