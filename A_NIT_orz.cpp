#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        unsigned long long n, z;
        cin >> n >> z;
        vector <unsigned long long> a; 
        unsigned long long max = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (max < x) max = x; 
            a.push_back(x);
        }

        for (int i = 0; i < n; i++) {
            unsigned long long p = a[i];
            while (z != 0) {
            p = (p | z);
            z = (p & z);
            if (p > max) max = p;
            else break;
        }
        }
        cout << max << endl;
    }

    return 0;
}