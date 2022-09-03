#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int p[n];
        map <int, vector<int> > freq, freq1;
        for (int i =0; i< n; i++) {
            cin >> a[i];
            freq[a[i]].push_back(i+1);
        }
        int flag = 0;
        freq1 = freq;
        for (int i =0; i<n; i++) {
            if (freq[a[i]].size() <= 1) {
                cout << -1 << endl; flag =1; break;
            }else{
                //copy(freq1[a[i]].begin(),freq1[a[i]].end(),ostream_iterator<int>(cout, " "));
                //cout << endl;
                    for (int j =freq1[a[i]].size()-1; j>=0;j--) {
                        if (freq1[a[i]].at(j) != i+1){
                            p[i] = freq1[a[i]].at(j);
                            //cout << p[i];
                            freq1[a[i]].erase(freq1[a[i]].begin() + j);
                            break;
                        }
                    }
                
            }
        }

        for (int i =0; i<n && flag == 0;i++) {
            cout << p[i] << " ";
            if (i == n-1) {
                cout << "\n";
            }
        }
    }
    return 0;
}