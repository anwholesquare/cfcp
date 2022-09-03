#include <bits/stdc++.h>
using namespace std;

void swap (int &x, int &y) {
    x = x + y; y = x - y;
}

void solve () {
    int n;
    cin >> n;
    

    vector <int> v(n), v1(n);
    for (int i =0; i< n; i++) {
        int x; cin >> x;
        v[i] = x;
        v1[i] = i+1;
    }

    if (n == 1) {cout << -1 << endl; return;}

    for (int i =0; i<n; i++) {
        if (v1.size() == 1 && v1[0] == v[i]) {
                int temp = v[i];
                v[i] = v[i-1]; v[i-1] = temp;
                continue;
        }
        if (v1[0] == v[i]) {
            v[i] = v1[1];
            v1.erase(v1.begin() + 1);
            
        }else{
            v[i] = v1[0];
            v1.erase(v1.begin() + 0);
            
        }
    }

    for (int i = 0; i<n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}