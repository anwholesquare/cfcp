#include <bits/stdc++.h>
using namespace std;

// void palfinder( int number, int len, int &pal) {
//     int firstDigit = floor ( (int)(number / pow(10,len-1)) % 10 );
//     if (firstDigit >= 7) {
//         int number1 = 0;
//         for (int i = 0; i <=len; i++) {
//             number1 += 1*pow(10,i);
//         }
//         pal = number1 - number;
//     }else{
//         int number1 = 0;
//         for (int i = 0; i <len; i++) {
//             number1 += 9*pow(10,i);
//         }
//         pal = number1 - number;
//     }
// }

void palfinder (string n, int len, char *pal) {
    if ( n[0] >= '8') {
        for (int i = len-1; i >= 0; i--) {
            int number = n[i] - '0';
            if (number == 0) {
                pal[i] = '1';
            }
            else if (number == 1) {
                pal[i] = '0';
            }else{
                pal[i] = (char) ('0' + 11- number);
                n[i-1] = (char) (n[i-1] + 1);
            }
        }
    }else{
        for (int i = 0; i <len; i++) {
            int number = n[i] - 48;
            pal[i] = (char) (48 + (9-number));
        }
    }
}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case = 1;
    cin >> test_case;
    while (test_case--) {
        int len;
        cin >> len;
        string n;
        char* pal = new char[len];
        cin >> n;
        palfinder(n, len, pal);
        for (int i = 0; i < len; i++) {
            cout << pal[i];
        }
        cout << endl;
    }

    return 0;
}