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
        
        int min_odd = INT_MAX, mike_index = -1;
        int min_even = INT_MAX, joe_index = -1 ;
        for (int i =1; i <=n;i++) {
            int x;
            cin >> x;
            if (i % 2 == 1 && min_odd > x) {
                min_odd = x;
                mike_index = i;
            }
            else if (i % 2 == 0 && min_even > x) {
                min_even = x;
                joe_index = i;
            }
            //cout << min_odd << " " << min_even;
        }
        
        if ( n % 2 == 1) {
            cout << "Mike\n";  
        }
        else if (min_odd == min_even) {
            if (joe_index > mike_index) {
                cout << "Joe\n"; 
            }else {
                cout << "Mike\n";
            }
            
        }
        else if (min_odd > min_even) {
            cout << "Mike\n";
        }
        else {
            cout << "Joe\n";
        }
        
    }

    return 0;
}