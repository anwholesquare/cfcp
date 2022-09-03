#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {

        long long n, m;
        cin >> n >> m;
        map< long long, int> v;
        for (int i = 0; i< m; i++) {
            long long x;
            cin >> x; 
            v[x]++;
        }
        

        int hrs = 0;

        map< long long, int>::iterator it;
        while (totalTask  > 0){
            hrs++;
            
            
            // for (it = v.begin(); it != v.end(); it++) {
            //     v[it->first]--;
            //     if (v[it->first] == 0) v.erase(it->first);
            // }  
            
            
        }
        cout << hrs << endl;
    }
    return 0;
}