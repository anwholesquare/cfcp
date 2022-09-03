#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> s, f;
        for (int i = 0; i<n; i++) {
            int x;
            cin >>x;
            s.push_back(x);
        }
        for (int i = 0; i<n; i++) {
            int y;
            cin >> y;
            f.push_back(y);
        }
        vector<int> korakaj, lastrkaj;
        korakaj.push_back(0);
        
        int k = 0;
        map<int, int> timeforPlayers;
        timeforPlayers[0] = f[0] - s[0];
        for (int i = 1; i < n; i++) {
            if (s[i] >= f[k]) {
                if (lastrkaj.size() > 0) {
                    timeforPlayers[lastrkaj[0]] = abs(f[k+1] - f[k]);
                    lastrkaj.erase(lastrkaj.begin());
                    k++;
                    i--;
                }else{
                    korakaj.push_back(i);
                    k++;
                    timeforPlayers[i] = f[i] - s[k];
                }
                
            }else{
                lastrkaj.push_back(i);
            }
        }
        
        for (int j = 0; j<lastrkaj.size(); j++) {
            int hrs = f[k+j+1] - f[k+j];
            //cout << hrs << endl;
            timeforPlayers[lastrkaj.at(j)] = hrs;
            //cout << hrs << " ";
            //cout << endl <<  i+j-1 << " " <<  i+j << " " << f[i+j] << " " << f[i+j-1] << endl;
        }

        for (int i =0; i<n;i++) {
            if (i < n-1) {
                cout << timeforPlayers[i] << " ";
            }else{
                cout << timeforPlayers[i];
            }
            
        }
        cout << "\n";

    }

    return 0;
}