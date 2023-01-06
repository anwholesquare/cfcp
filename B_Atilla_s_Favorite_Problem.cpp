#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int max = 0;
        for (int i =0; i<n; i++) {
            int tmp = (int) s[i] - (int) 'a' + 1;
            if (max > tmp) {
                max = max;
            }else {
                max = tmp;
            }
        }

        // cout << max << endl;

    }

    return 0;
}