#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i=0; i<n; i++) {
        int x; 
        cin >> x; v.push_back(x);
    }
    int k  =n;
    int i =0;
    while (k--) {
        int q;
        cin >> q;
        int sum = 0;
        while (q--) {
            char ch;
            cin >> ch;
            if (ch == 'D') sum +=1;
            else sum-= 1;
        }
        //cout << v[i] << " " << sum << endl;
        if (sum > 0) {
            v[i] = (v[i] + sum) % 10;
        }
        else if (sum < 0) {
            int a = v[i] + sum;
            if (a >= 0) {
                v[i] = a % 10;
            }else{
                v[i] = (10 - ((a*-1) % 10)) % 10;
            }
            
        } 
        i++;
    }

    for (int i =0; i<n; i++) {
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