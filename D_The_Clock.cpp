#include <bits/stdc++.h>
using namespace std;

int palindromeChecker (string time) {
    if ((time[4] == time[0]) && (time[1] == time[3])) {
        //cout << time << endl;
        return 1;
    }
    else return 0;
}

void stringGenerator (string& time, int x) {
    int minutes = (time[4] - '0') * 1 + (time[3] - '0') * 10;
    int hrs = (time[1] - '0') * 1 + (time[0] - '0') * 10;
    int addedMinutes = x + minutes;
    if (addedMinutes >= 60) {
        int newMinutes = addedMinutes % 60;
        if (newMinutes <=9) {
            time[3] = '0';
            time[4] = '0' + newMinutes;
        }else {
            time[3] = '0' + (newMinutes/10) % 10;
            time[4] = '0' + addedMinutes % 10;
        }
        int addedhrs = (hrs + (int)(addedMinutes/60)) % 24; 
        if (addedhrs <=9) {
            time[0] = '0';
            time[1] = '0' + addedhrs;
        }else {
            time[0] = '0' + (addedhrs/10) % 10;
            time[1] = '0' + addedhrs % 10;
        }

    }else {
        if (addedMinutes <= 9) {
            time[3] = '0';
            time[4] = '0' + addedMinutes;
        }else {
            time[3] = '0' + (addedMinutes/10) % 10;
            time[4] = '0' + addedMinutes % 10;
        }
    }
}

int main () {


    int n;
    cin >> n;
    while (n--) {
        string time;
        int x;
        cin >> time >> x;
        int cnt = 0;
        cnt += palindromeChecker(time);
        string time_cpy = time;
        if (x != 1440) {
            stringGenerator(time, x);
            while(time != time_cpy) {
                //cout << time  << endl;
                cnt += palindromeChecker(time);
                stringGenerator(time, x);
                
            }
        }

        cout << cnt << "\n";

    }

    return 0;
}