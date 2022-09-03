#include<bits/stdc++.h>
#include <unordered_map>
#pragma GCC optimize("-Ofast,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;

void solve () {
        long long n;
        cin >> n;
        vector<long long> a;
        unordered_map <long long, bool> freq;
        int pos = 0;
        int neg = 0;
        int zeroCount = 0;
        for (int i =0; i<n; i++) {
            int x;
            cin >> x; 
            
            if (x > 0 && pos < 3) { pos++; a.push_back(x); freq[x] = true;}
            else if (x < 0 && neg < 3) { neg++; a.push_back(x); freq[x] = true;}
            else if (x == 0 && zeroCount < 3) {
                freq[x] = true;
                zeroCount++;
                a.push_back(0);}
        }
        
        
        //sort(a.begin(), a.end(), greater<long long>());
        if (pos > 2 || neg > 2) {
            cout << "NO\n"; return;
        }

        n = a.size();
        for (int i =0; i< n; i++) {
            for (int j = i+1; j < n; j++) {
                for (int k = j+1; k < n; k++) {
                    long long sum = a[i] + a[j] + a[k];
                    // if (freq.find(sum) == freq.end()) {
                    //     cout << "NO\n"; return;
                    // }
                    bool flag = 1;
                    for (int p = 0; p <n; p++) {
                        if (a[p] == sum) {flag = 0; break;}
                    }

                    if (flag) { cout << "NO\n"; return;}
                }
            }
        }
        cout << "YES\n";
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();

    }
    return 0;
}