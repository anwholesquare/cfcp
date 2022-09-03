#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> a;
        for (int i = 0; i < n; i++) {
            int x; cin >> x; a.push_back(x);
        }
        for (int i = 0; i < n; i++) {
            long long sum;
            bool firstTime = true;
            for (int j =0; j < n; j++) {
                if (i == j) continue;
                if (firstTime) { sum = a[j]; firstTime = false; continue;}
                sum  = (sum ^ a[j]);
            }
            if ( sum == a[i]) {
                cout << a[i] << endl;
                break;
            }
        }
    }
    return 0;
}