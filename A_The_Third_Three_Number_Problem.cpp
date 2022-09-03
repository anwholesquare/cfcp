#include <bits/stdc++.h>
using namespace std;

int main (){
    int t = 1;
    cin >> t;
    // x ^ x = 0
    // x ^ 1 = x-1 (when x = odd) = x+1 (when x = even)

    while (t--) {
        long long n;
        cin >> n;
        if (n % 2 == 0) {
            cout << "0 0 " << n/2 << endl;
        }else {
            cout << -1 << endl;
        }
    }
    return 0;
}