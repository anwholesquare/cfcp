#include <bits/stdc++.h>
using namespace std;

void solve ( ) {
    unsigned int n;
    cin >> n;
    vector <long long> v;
    for (int i =0; i< n; i++) {
        int x; cin >> x; v.push_back(x);
    }

    if (n % 2 == 1) {cout << "NO\n"; return;}
    sort(v.begin(), v.end());
    vector <long long> res;
    int mid = n/2;
    for (int i = 1; i <=mid; i++) {
        int incrementalIndex = i-1;
        res.push_back(v[incrementalIndex]);
        res.push_back(v[mid+incrementalIndex]);
    }
    

    int flag = 0;
    for (int i =0; i<n;i++) {
        //cout << i << endl;
        if (i == 0) {
            if (res[0] < res[1] && res[0] < res[n-1]){continue;}
            else {flag = 1; break;}
        }
        else if (i == n-1) {
            if (res[n-1] > res[n-2]){continue;}
            else {flag = 1; break;}
        }else{
            if (i % 2 == 1 && res[i] > res[i+1] && res[i] > res[i-1]) {continue;}
            else if (i % 2 == 0 && res[i] < res[i+1] && res[i] < res[i-1]) {continue;}
            else {flag = 1; break;}
        }
    }

    if (flag == 1) {cout << "NO\n";}
    else{
        cout << "YES\n";
        for (int i =0; i<n; i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}

int main () {

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
    
}