#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        long long n,k;
        cin >> n >> k;
        vector<long long> v;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x; v.push_back(x);
        }

        if (k == 1) {
            cout << (n-1)/2 << endl;
            continue;
        }

        map <int, bool> isTall;
        int cnt = 0;
        for (int i = 1; i < n-1; i++) {
            if (v[i] > (v[i-1] + v[i+1]) ) {
                isTall[i] = true;
                cnt++;
            }else{
                isTall[i] = false;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}