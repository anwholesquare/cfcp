#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    string am,bm;
    string c = "";
    cin >> am >> bm;
    sort(am.begin(), am.end());
    sort(bm.begin(), bm.end());
    int ka = 0, kb = 0;
    while (n != 0 && m != 0) {
        if (am[0] < bm[0]) {
            if (k > ka) {
                c += am[0];
                am.erase(0,1);ka++;kb = 0;
                n--;
            }else{
                c += bm[0];
                bm.erase(0,1); kb++; ka = 0;
                m--;
            }
            
        }
        else if (am[0] == bm[0]) {
            string sub1 = am.substr(0,k);
            string sub2 = bm.substr(0,k);
            if (sub1 > sub2) {
                if (k > kb) {
                c += bm[0];
                bm.erase(0,1); kb++; ka = 0;m--;
                }else{
                    c += am[0];
                    am.erase(0,1);ka++;kb = 0;n--;
                }
            }else{
                if (k > ka) {
                c += am[0];
                am.erase(0,1);ka++;kb = 0;n--;
                }else{
                    c += bm[0];
                    bm.erase(0,1); kb++; ka = 0;m--;
                }
            }
        }
        else if (am[0] > bm[0]) {
            if (k > kb) {
                c += bm[0];
                bm.erase(0,1); kb++; ka = 0;m--;
            }else{
                c += am[0];
                am.erase(0,1);ka++;kb = 0;n--;
            }
            
        }
        

    }

    cout << c << endl;

}
int main () {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
