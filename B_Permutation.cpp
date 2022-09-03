#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << 2 << endl;
        bool isSet[n+1];
        memset(isSet, 0, sizeof(isSet));
        for (int i = 1; i <=n; i = i +2) {
            // if (isSet[i] == false) cout << i << " ";
            // if (i * 2 <= n) cout << i*2 << " ";
            // isSet[i] = true;
            // isSet[i*2] = true;
            for (int j = i; j <=n; j = j *2) {
                cout << j << " ";
            }
        }
        cout << endl;

    }
    return 0;
}