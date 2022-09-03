#include <bits/stdc++.h>
using namespace std;

int zPaiFor13 (int dhoraX, int dhoraY ) {
    int z = 13 - dhoraX - dhoraY;
    if (z < 10 && z >= 0) return z;
    else return -1;
}

int zPaiFor23 (int dhoraX, int dhoraY ) {
    int z = 23 - dhoraX - dhoraY;
    if (z < 10 && z >= 0) return z;
    else return -1;
}

int zPaiFor3 (int dhoraX, int dhoraY ) {
    int z = 3 - dhoraX - dhoraY;
    if (z < 10 && z >= 0) return z;
    else return -1;
}

int main () {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case = 1;
    cin >> test_case;
    while (test_case--) {
        long long n;
        cin >> n;
        int a[10] = {0,0,0,0,0,0,0,0,0,0};
        for (int i = 0; i <n; i++) {
            int s;
            cin >> s;
            a[s%10]++;
        }

        int flag = 0;
        
        for (int i = 0; i < 10 && flag == 0; i++) {
            for (int j = 0; j < 10 && flag == 0; j++) {
                if (((i == j) && a[i] >=2) || i !=j) {
                    if (a[i] >= 1 &&  a[j] >= 1) {
                        int z1 = zPaiFor3(i, j);
                        int z2 = zPaiFor13(i, j);
                        int z3 = zPaiFor23(i, j);
                        
                        if (a[1] >= 3 ){flag =1;}
                        else if (z1 >= 0 && a[z1] > 0 && z1 != 1) {
                            if (z1 != i && z1 != j ) {flag = 1; break;} 
                            if ((z1 == i || z1 == j) && a[z1] >= 2) { flag = 1;
                            //cout << i << " " << j << " " << z1 << endl; 
                            break;} 
                        }
                        else if (z2 >= 0 && a[z2] > 0) {
                            if (z2 != i && z2 != j ) {flag = 1; break;} 
                            if ((z2 == i || z2 == j) && a[z2] >= 2) { flag = 1;
                            //cout << i << " " << j << " " << z1 << endl; 
                            break;} 
                        }
                        else if (z3 >= 0 && a[z3] > 0) {
                            if (z3 != i && z3 != j ) {flag = 1; break;} 
                            if ((z3 == i || z3 == j) && a[z3] >= 2) { flag = 1;
                            //cout << i << " " << j << " " << z1 << endl; 
                            break;} 
                        }
                    }
                }
            }
        }






        // BruteForcing
        // for (int i = 0; i <n; i++) {
        //     int s;
        //     cin >> s;
        //     arr[i] = '0' + s % 10;
        //     //cout << arr[i] << endl;
        // }
        // int flag = 0;
        // for (int i = 0; i <n-2 && flag == 0;i++) {
        //     for  (int j = i+1; j < n-1 && flag == 0; j++) {
        //         for (int k = j+1; k < n && flag == 0; k++) {
        //             int sum = (arr[i] + arr[j] + arr[k]) - 48*3;
        //             if (sum % 10 == 3) {
        //                 flag = 1; break;
        //             }
        //         }
        //     }
        // }
        if (flag) cout << "YES\n";
        if (flag == 0) cout << "NO\n";

        
    }

    return 0;
}