#include<bits/stdc++.h>
using namespace std;

void solve () {
    int n;
    cin >> n;
    map <int, int> freq;
    for (int i =0; i<n;i++){
        int x;
        cin >> x; freq[x]++;
    } 

    map <int,int>::iterator it;
    int max = INT_MIN, maxFirst = -1;
    for (it = freq.begin(); it != freq.end(); it++){
        if (it->second > max) {
            max = it->second;
            maxFirst = it->first;
        } 
    }

    int dorkar = n-max;
    
    if (dorkar != 0) {
        int copies = 1;
        int swaps = dorkar;
        int changes = (dorkar > max) ? max : dorkar;
        dorkar -= changes;
        while (dorkar != 0) {
            max = max * 2;
            changes = (dorkar > max) ? max : dorkar;
            dorkar -= changes;
            copies++;
        }

        cout << copies + swaps << endl;
    }else {
        cout << 0 << endl;
    }
    
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}