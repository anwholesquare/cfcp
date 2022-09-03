#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector <double> v;
    double sum = 0;
    for (int i =0; i< n; i++) {
        double x; cin >> x; v.push_back(x);
        sum += x;
    }
    for (int i =0; i< n; i++) {
        double mean = (sum - v[i])/(n-1);
        if (v[i] == mean) { cout << "YES\n"; return;}
    }

    cout << "NO\n"; return;

}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}