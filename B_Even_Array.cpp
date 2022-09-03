#include <bits/stdc++.h>
using namespace std;

int main () {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case = 1;
    cin >> test_case;
    while (test_case--) {
        int n;
        cin >> n;
        int a[n];
        for (int i= 0; i < n; i++) cin >> a[i];
        int k = 0;
        int mod0 = 0, mod1 = 0;
        for (int i =0; i<n; i++) {
            if (i % 2 != a[i] % 2){
                if (a[i] % 2 == 0) mod0++;
                else mod1++;
                k++;
            }
        }
        if (k == 0) cout << k << "\n";
        else if (k % 2 == 1) cout << -1 << "\n";
        else if (k % 2 == 0) {
            if (mod0 == mod1) cout << k/2 << "\n";
            else cout << -1 << "\n";
        }
    }

    return 0;
}