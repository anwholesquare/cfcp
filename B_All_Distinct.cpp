#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){ 
        int n;
        cin >> n;
        int arr[n];
        set<int> s1;
        map<int,int>freq;
        for (int i =0; i< n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
            s1.insert(arr[i]);
        }
        int dis = 0;
        for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
            if (freq[*it] % 2 == 0) dis++;
        }
        if (dis % 2 == 0) {dis = 0;}
        dis = (dis % 2 == 0) ? 0 : 1;
        
        cout << s1.size() - dis << endl;


    }

    return 0;
}