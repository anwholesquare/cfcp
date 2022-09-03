#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int summer (char ch) {
    return( 26 - (122- (int)ch));
}
void solve () {
    string w;
    cin >> w;
    ll p;
    cin >> p;
    map <int, vector<int> > sum;
    long long sums = 0;
    for (int i =0; i<w.size();i++) {
        int x = ( 26 - (122- (int)w[i]));
        sum[x].push_back(i);
        sums += x;
    }
   
    
    while(sums > p){
        vector<int> v1= sum.rbegin()->second;
        if (v1.size() > 0) {
            int index = v1.back();
            w[index] = '?';
            sums = sums - (sum.rbegin()->first);
            //cout << w[index] << " " << w << endl;
            sum.rbegin()->second.pop_back();
        } else{
            sum.erase(sum.rbegin()->first);
        }
    }
    for (int i =0; i < w.size(); i++) {
        if (w[i] == '?') continue;
        cout << w[i];
    }
    cout << endl; 

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case = 1;
    cin >> test_case;
    while (test_case--) {
        solve();
    }

    return 0;
}