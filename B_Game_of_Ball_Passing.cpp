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
        long long passes[n];
        for (int i =0; i< n; i++) {
            cin >> passes[i];
        }
        sort(passes, passes+n);
        if (passes[n-1] == 0) {cout << 0 << endl; continue;}
        long long sumOfPasses = 0;
        for (int i =0; i < n-1; i++) {
            sumOfPasses += passes[i];
        }
        if (sumOfPasses < passes[n-1]) {
            cout << passes[n-1] - sumOfPasses << "\n";
        }
        else cout << 1 << endl;
    }

    return 0;
}