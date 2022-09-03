#include <bits/stdc++.h>
using namespace std;



int main () {

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    int test_case = 1;
    cin >> test_case;
    while (test_case--) {
        int x, y;
        cin >> x >> y;
        //int flag = 0, last_x = -1;
        //while (true) {
            //cout << "enter\n";
            // if (x >= y) {flag = 1; break;}
            // else if (x == 1 && y != 1) break;
            // else if (x % 2 == 1 && last_x == (x-1) && (last_x*3/2) == x) break;
            // else if (x % 2 == 1 && x > 1) { last_x = x; x--;}
            // while(x % 2 == 0) { 
            //     if (x >= y) {flag = 1; break;} 
            //     last_x = x; x = 3*x/2; 
            // }

            //new

            
            
        //}

        if ((x == 3 && (y!= 3 && y!= 2 && y!=1)) || (x == 1 && y!= 1) || (x == 2 && (y!=2 && y != 1 && y != 3))) {cout << "NO\n";}
        else {cout << "YES\n";}

    }

    return 0;
}