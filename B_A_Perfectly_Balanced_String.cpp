#include <bits/stdc++.h>
using namespace std;



int main () {

    int test_case = 1;
    cin >> test_case;
    while (test_case--) {

        string n;
        cin >> n;
        set <char> diff;
        for (int i = 0; i < n.size(); i++) {
            diff.insert(n[i]);
        }
        bool flag = 0;
        for (int i = 0; i <n.size(); i++) {
            if (n[i] != n[i% (int) diff.size()])  {flag = 1; break;}
        }

        if (flag) {
            cout << "NO\n";
        }else {
            cout << "YES\n";
        }

        // string n;
        // cin >> n;
        // map <char, int> freq;
        // int finder = 0;
        // for (int i = 0; i < n.size(); i++) {
        //             freq[n[i]]++;
        //             if (freq[n[i]] >= 2 && n[i] == n[i-1]) finder = 1;
        // }

        // if (finder == 1 & freq.size() >= 2 && n.size() > 2) {
        //     cout << "NO\n"; continue;
        // }
        // char* distinct_char = new char[n.size()];
        // int len = 0;
        // map<char,int>::iterator itr;
        // for (itr = freq.begin(); itr != freq.end(); itr++) {
        //     distinct_char[len] =  (char )itr->first; 
        //     //cout << distinct_char[len] << endl;
        //     //cout << len << " " <<  itr->first << " ";
        //     len++;
        // }
        //cout << distinct_char;
        // int len = freq.size();
        // if (len == n.size()) {
        //     cout << "YES\n"; continue;
        // }
        // else if (len == 1) {
        //     cout << "YES\n"; continue;
        // }
        
        // int flag = 0;
        // for (int i = 0; i < n.size() && flag == 0; i++) {
        //     for (int j = i; j <n.size() && flag == 0; j++) {
        //         if (i == j) { continue;}
        //         string sub = n.substr(i, (j-i) +1);
        //         //cout << sub << endl;
        //         map <char, int> freq1;
        //         bool pragma = 0;
        //         for (int k = 0; k < sub.size(); k++) {
        //             freq1[sub[k]]++;
        //             if (freq1[sub[k]] >= 2) {
        //                 pragma = 1;
        //                 break;
        //             }
        //         }
        //         if (pragma == 0) continue;
        //         if (pragma == 1 && freq1.size() < freq.size()) {
        //             cout << "NO\n"; flag = 1; break;
        //         }
        //         // int arr[len];
        //         // for (int p = 0; p < len; p++) {
        //         //     //cout << distinct_char[p] << " ";
        //         //     arr[p] = freq1[distinct_char[p]];
        //         // } 

        //         // sort(arr, arr+len);


        //         // int res = arr[len-1] - arr[0];
        //         // if (res != 0 && res != 1) {
        //         //     //cout <<  res << " " << sub << endl;
        //         //     cout << "NO\n"; flag = 1; break;
        //         // }
        //     }
        // }

        // if (flag == 0) {
        //     cout << "YES\n";
        // }
    }

    return 0;
}