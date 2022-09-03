#include<bits/stdc++.h>
using namespace std;
void print (vector <int> v) {
    for (int i =0 ; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main () {
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        vector <int> v;
        for (int i =0; i< s.size(); i++){
            v.push_back( (int)(s[i] - '0'));
        }
        int cnt = 0;
        int len = s.size();
        for (int i = 1; i < len; i++) {
            if ( v[i] != v[i-1] && (i-1) >= 0) { 
                cnt++; 
                //cout << i << ": " <<  v[i-1] << " " << v[i] << endl;
                v.erase(v.begin() + (i-1));
                v.erase(v.begin() + (i-1));
                //print(v);
                len = len -2;
                i = i -2;
            }
        }
        //cout << cnt << endl;
        if (cnt % 2 == 1) cout << "DA\n";
        else cout << "NET\n";

    }

    return 0;
}