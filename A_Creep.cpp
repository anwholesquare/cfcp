#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int diff = abs(a-b); 
        if (diff > 1) {
            int a1= a, b1 = b;
            for (int i = 0; i < (a+b); i++) {
                if (i % 2 == 0) {
                    if (a1 > 0) {cout << 0; a1--;}
                    else cout << 1;
                }
                else {
                    if (b1 > 0) {cout << 1; b1--;}
                    else cout << 0;
                }
                
            }
            cout << endl;
        } 
        else{
            int p = (b >= a) ? 1 : 0;
            int q = (p == 1) ? 0 : 1;
            for (int i = 0; i < a+b; i++) {
                if (i % 2 == 0) cout << p;
                else cout << q;
            }
            cout << endl;
        }
        
        
    }
    return 0;
}