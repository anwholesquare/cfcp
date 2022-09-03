#include <bits/stdc++.h>
using namespace std;

int main () {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    long long max = INT_MIN;
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > max) {
            max = a[i];
        }
    }
    long long sum = 0;
    for (long long i = 0; i < n; i++) {
        sum += (max - a[i]); 
    }
    cout << sum << "\n";

    return 0;
}