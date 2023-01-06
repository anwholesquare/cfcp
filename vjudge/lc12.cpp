#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

int main () {
    int n = 1;
    while (n != 0) {
        
        cin >> n;
        if (n == 0) return 0;
        int maxer = 0;
        map <string , int> res;
        for (int i = 0; i < n; i++) {
            
            vector<string> v(5);
            string d;
            for (int k = 0; k < 5; k++) cin >> v[k];
            sort(all(v));

            string s;
            for (int k = 0; k < 5; k++) s += v[k];

            if (res.count(s) == 1) {
                res[s]++;
            }else {
                res[s] = 1;
            }
            if (res[s] > maxer) {
                maxer = res[s];
            }
        }
        // ar kotogula eki quantity r combination e ache
        map <string, int>::iterator it;
        int cnt = 0;
        for (it = res.begin(); it != res.end(); it++) {
            //cout << it->first << " " << it->second << endl;
            if (it->second == maxer) {
                cnt++;
            }
        }
        maxer = maxer * cnt;
        
        cout << maxer << endl;
    }
    
    return 0;
}