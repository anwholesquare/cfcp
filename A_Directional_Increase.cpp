#include <bits/stdc++.h>
using namespace std;

int main () {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case = 1;
    cin >> test_case;
    while (test_case--) {
        int n;
        cin >> n;
        long long arr[n];
        long long prefix_arr[n];
        int sum = 0, ending_non_zero_index = n;
        int trustMeBro = 0;
        for (int i =0; i <n;i++) {
            cin >> arr[i];
            if (arr[i] != 0) trustMeBro = 1;
            if (i == 0) prefix_arr[i] = arr[i];
            else prefix_arr[i] = prefix_arr[i-1] + arr[i];
            //cout << prefix_arr[i] << " ";
            sum += arr[i];
        }

        for (int i = n-1; i>=0; i--) {
            if (arr[i] != 0) {
                ending_non_zero_index = i;
                break;
            }
        }
        int flag = 0;
        for (int i = 0; i < ending_non_zero_index; i++) {
            if (prefix_arr[i] <= 0) { flag = 1; break; }
        }

        if (sum == 0 && flag == 0 && trustMeBro == 1) cout << "Yes\n";
        else if (trustMeBro == 0) cout << "Yes\n";
        else cout << "No\n";

        
    }

    return 0;
}