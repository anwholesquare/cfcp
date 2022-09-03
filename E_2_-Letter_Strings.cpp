#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    ll k = n;
     
    map <char, int> firstOcc, secondOcc;
    map <string, int> strOcc;
    vector<string> v;
    
    while (k--) {
        string s;
        cin >> s;
        v.push_back(s);
        strOcc[s]++;
        firstOcc[s[0]]++;
        secondOcc[s[1]]++;
    }
    ll ans = 0;
    for (int i =0; i<n; i++) {
        int occStr = strOcc[v[i]] - 1;
        if (occStr >= 1) { strOcc[v[i]]--;}
        int occFirst = firstOcc[v[i].at(0)];
        if (occFirst > 0) {firstOcc[v[i].at(0)]--;}
        else occFirst = 0;
        int occSecond = secondOcc[v[i].at(1)];
        if (occSecond > 0) {secondOcc[v[i].at(1)]--;}
        else occSecond =0;
        
        ans += ((occFirst -1 - occStr) + (occSecond - 1 - occStr));
        //cout << (n- occFirst - i) << " " << (n-occSecond - i) << " " << occStr << " "  << ans << endl;
        
    }

    cout << ans << endl;

    


}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}