#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case = 1;
    cin >> test_case;
    while (test_case--) {
        int n,m;
        cin >> n >> m;
        int arr[n][m];
        int max_index_i, max_index_j;
        int max = INT_MIN;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
                if (max < arr[i][j]) {
                    max = arr[i][j];
                    max_index_i = i;
                    max_index_j = j;
                } 
            }
        }
        int h = (n-max_index_i) > (max_index_i +1) ? (n-max_index_i) : (max_index_i +1);
        int w = (m-max_index_j) > (max_index_j +1) ? (m-max_index_j) : (max_index_j +1);
        cout << h*w << endl;
    }

    return 0;
}