#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        map <int, vector<int> > xy; 
        bool flag = 0;
        int i , j;
        int cnt[8+1] = {0};
        for (i = 1; i<=8; i++) {
            
            string s;
            cin >> s;
            for (j = 0; j < 8; j++) {
                if (s[j] == '#') cnt[i]++;
                if (cnt[i] == 1) {
                    xy[i].push_back(i);
                    xy[i].push_back(j+1); 
                }
            }
        }

        for (int i = 2; i <=7; i++) {
            if (cnt[i] == 1 && cnt[i-1] == 2 && cnt[i+1] == 2) {
                cout << xy[i].at(0) << " " << xy[i].at(1) << endl;
            }
        }
        
    }
        

    return 0;
}