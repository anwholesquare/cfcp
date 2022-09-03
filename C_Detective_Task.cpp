#include <bits/stdc++.h>
using namespace std;

int main () {


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case = 1;
    cin >> test_case;
    while (test_case--) {
        string n;
        cin >> n;
        if (n[0] == '0' || n[n.size() - 1] == '1') {
            cout << 1 << endl; continue;
        }
        int indexFor1 = -1;
        int cnt = 0;
        for (int i = n.size()-1; i >= 0; i--) {
            if (n[i] == '1') {
                indexFor1 = i; break;
            }
        }

        if (indexFor1 != -1) {
            for (int i = indexFor1; i< n.size(); i++) {
                cnt++;
                if (n[i] == '0') {
                    break;
                }
            }
            cout << cnt << endl;
        }else {

            
                int indexFor0 = -1;
                int flag = 0;
                for (int i = 0; i < n.size(); i++) {
                    if (n[i] == '?' && indexFor0 == -1) {
                        indexFor0 = i; cnt++; continue;
                    }
                    else if (indexFor0 != -1 && n[i] != '0') {
                        cnt++; continue;
                    }
                    else if (indexFor0 != -1 && n[i] == '0') {
                        flag = 1;
                        cout << cnt+1 << endl;
                        break;
                    }
                }

                if (indexFor0 == -1) {
                    cout << n.size() << endl;
                }else if (flag == 0) {
                    cout << cnt << endl;
                }
            
        }



    }

    return 0;
}