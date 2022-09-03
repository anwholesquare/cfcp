#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        //vector<int> a;
        int odd_num = 0;
        int even_num = 0;
        for (int i =0; i<n;i++) {
            int x;
            cin >> x;
            if (x %2 == 0) even_num++;
            else odd_num++;
            //a.push_back(x);
        }

        // for (int i = 0; i< (a.size()-1);i++){
        //     if ((a[i] + a[i+1]) % 2 == 0) {continue;}
        //     else {
        //         a.erase (a.begin() + (i+1));
        //         //copy(a.begin(),a.end(),ostream_iterator<int>(cout, " "));
        //         //cout << endl;
        //         int k = i+1;
        //         while ((a[i] +a[k]) % 2 == 1 &&  (k < a.size())) {
        //             a.erase (a.begin() + (k));
        //         }
        //     }
        // }
        // copy(a.begin(),a.end(),ostream_iterator<int>(cout, " "));
        // cout << n-a.size() << endl;

        int res = (even_num < odd_num) ? even_num: odd_num;
        cout << res << endl;

    }

    return 0;
}