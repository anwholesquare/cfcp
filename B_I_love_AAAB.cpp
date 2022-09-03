#include <bits/stdc++.h>
using namespace std;


int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.size() < 2) {
            cout << "NO\n"; continue;
        }

        if (s[s.size() - 1] != 'B') {
            cout << "NO\n"; continue;
        }
        int flag = 0;
        //cout << s << endl;
        for (int i =0 ; i < s.size(); i++) {
            if (s[i] == 'B' && i >= 0) {
                if (s[i-1] == 'A') {
                    s.erase(i-1, 2);
                    //cout << i-1 << " " << i << s << endl;
                    i = i-2;
                }else{
                    flag = 1; break;
                }
            }
        }

        if (flag == 0) cout << "YES\n";
        else { cout << "NO\n";}


    }

    return 0;
}