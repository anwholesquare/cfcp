#include <bits/stdc++.h>
using namespace std;

void findHighest (unsigned long long &high, unsigned long long max, unsigned long long offset) {
    high = max - offset;
    high = (high % 2 == 0) ? high-1 : high;
}

int main () {


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case = 1;
    cin >> test_case;
    while (test_case--) {
        unsigned long long n;
        cin >> n;
        unsigned long long k = n/2;
        unsigned long long sum_even = k*(k+1);
        unsigned long long odd;
        unsigned long long con_sum = 0;
        unsigned long long ghor = k-1;
        for (int i = 0; i <k; i++) {
            findHighest(odd, sum_even - con_sum , pow(ghor, 2));
            con_sum += odd;
            ghor--;
            //cout << odd[i] << " ";
        }
        if (sum_even == con_sum) {
            cout << "YES\n";
            int loop_time = k;
            for (int i = 2; loop_time-- ;i = i+2) {
                cout << i << " ";
            }
            con_sum = 0;
            ghor = k-1;
            for (int i = 0; i <k; i++) {
                findHighest(odd, sum_even - con_sum , pow(ghor, 2));
                con_sum += odd;
                ghor--;
                cout << odd << " ";
            }
            cout << "\n";
        }else {
            cout << "NO\n";
        }
    }

    return 0;
}