#pragma GCC optimize("Ofast,unroll-loops") 
#pragma GCC target("avx,avx2,fma") 
#include <bits/stdc++.h>
using namespace std;



void print(vector <pair <long long, long long> > a) {

    for (int i = 0; i< a.size(); i++) {
        cout << i << ": " << a[i].first << "," << a[i].second << endl ;
    }
    cout << endl;
}


void add (vector <pair <long long, long long> > &a, int x, int times) {
    if (a.size() == 0) {
        a.push_back(make_pair(x, times));
    }else{
        int prevIndex = a.size()-1;
        if (a[prevIndex].first == x) a[prevIndex].second += times;
        else a.push_back( make_pair(x, times) );
    }
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector <pair <long long, long long> > a, b;
        for (int i =0; i< n; i++) {
            long long x;
            cin >> x;
            
            if ( x % m == 0 && m != 1) {
                int t = 0;
                while (x % m == 0 && (x/m) > 0) {
                    x = x/m;
                    t++;
                }
                long long t1 = pow (m, t);
                add(a,x,t1);
                
            }else{
                add(a,x,1);
            }
        }

        int k;
        cin >> k;

        for (int i =0; i<k; i++) {
            long long x;
            cin >> x;
            
            

            if ( x % m == 0 && m != 1) {
                int t = 0;
                while (x % m == 0 && (x/m) > 0) {
                    x = x/m;
                    t++;
                }
                long long t1 = pow (m, t);
                add(b,x,t1);
            }else{
                add(b,x,1);
            }
        }

        

        

    

        //print(a);
        //print (b);
        //cout << a << endl << b << endl;
        if (a.size() != b.size()) cout << "No\n";
        else{
            int flag = 0;
            for (int i = 0; i<a.size(); i++) {
                if (a[i].first != b[i].first || a[i].second != b[i].second) {
                    flag = 1; break;
                }
            }
            if (flag ) cout << "No\n";
            else cout << "Yes\n";
        }
        

    }

    return 0;
}