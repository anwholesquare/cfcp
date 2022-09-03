#pragma GCC optimize("Ofast,unroll-loops") 
#pragma GCC target("avx,avx2,fma") 
#include <bits/stdc++.h>
using namespace std;

// Memory Optimized Solution
// bool operation1 (vector<int> &arr, int i1, int m) {
//     if (i1 < arr.size()) {
//         vector<int> temp;
//         int val = 0;
//         if (arr[i1] % m == 0) {
//             val = arr[i1]/m;
//         } 
//         else {
//             return false;
//         }
//         int i =0;
//         int k = m;
//         while (true) {
//             if (i < i1) {
//                 temp.push_back(arr[i]);
//                 i++;
//                 continue;
//             }
//             else if (i1 == i && k > 0) {
//                 for (int j =0; j < m; j++) {
//                     temp.push_back(val);
//                 }
//                 k = 0;
//                 i++;
//             }
//             else {
//                 if (arr.size() > (temp.size() - m +1)) {
//                     for (int l = i; l< arr.size(); l++) {
//                         temp.push_back(arr[l]);
//                     }
//                     continue;
//                 }else{
//                     break;
//                 }
//             }
//         }
//         arr = temp;
//         return true;
//     }
//     return false;
// }


// bool operation2 (vector<int> &arr, int i1, int m) {
//     //cout << arr.size() << "-";
//     if (i1 >= 0 && (i1+m-1) <= arr.size()) {
//         int flag = 0;
//         for (int i = 0; i < m-1; i++) {
//             if (arr[i1] != arr[i+i1+1]) {
//                 flag = 1;
//                 return false;
//             }   
//         }
//         if (flag == 0) {
//             arr[i1] = (arr[i1] * m);
//             arr.erase(arr.begin() + i1 + 1, arr.begin() + i1 + m);
//             return true;
//         }
//     }
//     return false;
// }

void print(vector<int> a) {
    for (int i = 0; i< a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// void match (vector<int> a, vector <int> b) {
//     int sizer = min(a.size(), b.size());
//     for (int i = 0; i< sizer;i++) {
//             if (a[i] != b[i]) {
//                 cout << "No" << endl;
//                 return;
//             }
//     }
//     cout << "Yes" << endl;
// }


int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        string a = "", b = "";
        for (int i =0; i< n; i++) {
            int x;
            cin >> x;
            //cout << x << ": ";
            if ( x % m == 0 && m != 1) {
                int t = 0;
                while (x % m == 0 && (x/m) > 0) {
                    x = x/m;
                    t++;
                }
                int t1 = pow (m, t);
                while (t1--) {
                    a += to_string(x);
                    //a.push_back(x);
                    //cout << x;
                }
                //cout << endl;
            }else{
                a += to_string(x);
                //a.push_back(x);
                //cout << x << endl;
            }
        }

        int k;
        cin >> k;

        int len  = 0, lenPrev = 0;
        int flag = 0;
        for (int i =0; i<k; i++) {
            int x;
            cin >> x;
            
            if (flag) continue;

            if ( x % m == 0 && m != 1) {
                int t = 0;
                while (x % m == 0 && (x/m) > 0) {
                    x = x/m;
                    t++;
                }
                int t1 = pow (m, t);
                int lprev = b.size();
                while (t1--) {
                    b += to_string(x);
                    //b.push_back(x);
                    //cout << x;
                }
                lenPrev = len-1;
                len += b.size() - lprev;
                //cout << endl;
            }else{
                int lprev = b.size();
                b += to_string(x);
                lenPrev = len-1;
                len += b.size() - lprev;
                //b.push_back(x);
                //cout << x << endl;
            }
            for (int s =lenPrev; s < len; s++) {
                if (b[i] != a[i]) flag = 1;
            }
            //if (a[i] != b[i] ) flag = 1;
        }

        

        

        // for (int i = 0; i < a.size(); i++) {
        //     if (operation1(a,i,m) ) {
        //         i--;
        //     }
        // }

        // for (int i = 0; i < b.size(); i++) {
        //     if (operation1(b,i,m) ) {
        //         i--;
        //     }
        // }

        //print(a);
        //print (b);
        //cout << a << endl << b << endl;
        if (a == b && !flag) cout << "Yes\n";
        else cout << "No\n";
        //match(a,b);

    }

    return 0;
}