#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    bool firstTime = 1;
    cin >> t;
    while(t--) {
        
        char ch = 'a';
        int zero = 0, one = 0;
        int max = 0;
        cin.get(ch);
        if (ch == '0') zero++;
        else if (ch == '1') one++;
        int res = 0;
        while (cin.get(ch)) {
            if (ch == '0') zero++;
            else if (ch == '1') one++;
            else break;
            res  = (zero > one) ? one : zero;
            res = (zero == one) ? 0: res;
            if (res > max) max = res;
        
        }
        
        cout << max << endl;

    }

    return 0;
}