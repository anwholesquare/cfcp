#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--){
        int n,m;
        cin >> n >> m;
        long long sum = 0;
        for (int i =0; i<n;i++) {
            long long x;
            cin >> x;
            sum += x;
        }

        if (sum > m) {
            cout << sum - m << endl;
        }  else{
            cout << 0 << endl;
        }


    }

    return 0;
}