#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case = 1;
    cin >> test_case;
    while (test_case--) {
        int row,column;
        cin >> row >> column;
        int mat[row][column];

        for (int i = 0; i <row; i++) {
            for (int j = 0; j <column; j++) {
                cin >> mat[i][j];
            }
        }

        // long long sum_diag_daan[row];
        // long long sum_diag_baam[column];
        // memset( sum_diag_daan, 0, row*sizeof(long long) );
        // memset( sum_diag_baam, 0, column*sizeof(long long) );
        // int r = 0;
        // while (r < row) {
        //     int i = r;
        //     int j = 0;
        //     while (i < row && j < column) {
        //         sum_diag_daan[r] += mat[i][j];
        //         i++; j++;
        //     }
        //     r++;
        // }
        // int c = 0;
        // while (c < column) {
        //     int i = 0;
        //     int j = c;
        //     while (j >= 0) {
        //         sum_diag_baam[c] += mat[i][j];
        //         i++;j--;
        //     }
        //     c++;
        // }

        // // for (int i = 0; i < column; i++) {
        // //     cout << sum_diag_baam[i] << endl;
        // // }

        // int max_sum  = INT_MIN;

        // for (int i = 0; i <row; i++) {
        //     for (int j = 1; j <column; j++) {
        //         int res= sum_diag_baam[j] + sum_diag_daan[i];
        //         if (max_sum < res) {
        //             max_sum = res;
        //         } 
        //     }
        // }

        long long max = INT_MIN;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                long long totalSum = mat[i][j];
                int p= i-1, q = j+1;
                while (p >= 0 && q < column) {
                    totalSum += mat[p][q];
                    p--; q++;
                }
                p = i+1;q = j-1;
                while (p >= 0 && p < row && q < column && q >= 0) {
                    totalSum += mat[p][q];
                    p++;q--;
                }
                p = i -1;q = j -1;
                while (p >= 0 && p < row && q < column && q >= 0) {
                    totalSum += mat[p][q];
                    p--;q--;
                }

                p = i +1;q = j +1;
                while (p >= 0 && p < row && q < column && q >= 0) {
                    totalSum += mat[p][q];
                    p++;q++;
                }
                if (totalSum > max) {
                    max = totalSum;
                }
            }
        }

        cout << max << "\n";

    }

    return 0;
}