#include <bits/stdc++.h>
using namespace std;

// int paranoid1 (string str){
//     int len = str.size();
//     string sub = str.substr(1,str.size()-2);
//     sub = paranoider(sub);
//     cout << str[i] << " " << sub << str[len-1] << endl;
//     return 1;
    
// }


// string paranoider (string str){
//     int len = str.size();
//     while (true) {
//         int flagger = 0;
//         for (int i =0; i<len; i++) {
//             if (len == 1) return str;
//             if (str[i] == '1') {
                
//                 if (str[i-1] == '0') {
//                     flagger = 1;
//                     str.erase(i-1,1);
//                     len--;
//                     i--;
//                 }

//                 else if (str[i+1] == '0') {
//                     flagger = 1;
//                     str.erase(i,1);
//                     len--;
//                     i--;
//                 }
                
//             }
//         }
//         if (flagger == 0) return str;
//     }
//     return str;
// }

// int paranoid (string str){
//     int len = str.size();
//     if (len == 2) {
//         if (str == "01" || str == "10") return 1;
//     }
//     while (true) {
//         int flagger = 0;
//         for (int i =0; i<len; i++) {
//             if (len == 1) return 1;
//             if (str[i] == '1') {
                
//                 if (str[i-1] == '0') {
//                     flagger = 1;
//                     str.erase(i-1,1);
//                     len--;
//                     i--;
//                 }

//                 else if (str[i+1] == '0') {
//                     flagger = 1;
//                     str.erase(i,1);
//                     len--;
//                     i--;
//                 }
                
//             }
//         }
//         if (flagger == 0) return 0;
//     }
//     return 0;
// }

int paranoidTeller (string s) {
    if (s[s.size()-1] != s[s.size()-2]) return 1;
    return 0;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        long long cnt = s.size();
        // for (int i = 0; i <n; i++) {
        //     for (int j = 2; j <= (n-i); j++) {
        //         string sub = s.substr(i,j);
        //         cnt += paranoidTeller(sub);
        //     }
        // }
        for (int i =1; i<n; i++) {
            if (s[i] != s[i-1]) cnt+= i;
        }
        cout << cnt << endl;
    }

    return 0;
}