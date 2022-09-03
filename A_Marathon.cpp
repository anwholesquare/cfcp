#include <bits/stdc++.h>
using namespace std;

int main () {
    long long t;
    cin >>t;
    while (t--) {
        long long a = 0;
        cin >> a;
        int cnt = 0;
        for (int i = 0 ; i<3; i++) {
            long long x;
            cin >> x;
            if (a < x) cnt++;
        }
        cout << cnt << endl;
    }
    

    return 0;
}