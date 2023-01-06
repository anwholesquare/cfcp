#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;
map <string, ll> res;
void dp () {
    int index = 1;
    string s = "a";
    char i,j,k,l,m;
    i='a';j='b';k='c';l='d';m='e';
    for (; i <= 'z'; i++) {
        s[0] = i;
        res[s] = index;
        index++;
    }

    s = "ab";
    i='a';j='b';k='c';l='d';m='e';
    for (; i <= 'z'-1; i++) {
        s[0] = i;
        for (j=i+1; j <= 'z'; j++) {
            s[1] = j;
            res[s] = index;
            index++;
        }
    }

    s= "abc";
    i='a';j='b';k='c';l='d';m='e';
    for (; i <= 'z'-2; i++) {
        s[0] =i;
        for (j=i+1; j <= 'z'-1; j++) {
            s[1] =  j;
            for (k=j+1; k <= 'z'; k++ ) {
                s[2] = k;
                res[s] = index;
                index++;
            }
        }
    }

    s= "abcd";
    i='a';j='b';k='c';l='d';m='e';
    for (; i <= 'z'-3; i++) {
        s[0] = i;
        for (j=i+1; j <= 'z'-2; j++) {
            s[1] = j;
            for (k=j+1; k <= 'z'-1; k++ ) {
                s[2] =  k;
                for (l=k+1; l <= 'z'; l++) {
                    s[3] = l;
                    res[s] = index;
                    index++;
                }
            }
        }
    }


    s= "abcde";
    i='a';j='b';k='c';l='d';m='e';
    for (; i <= 'z'-4; i++) {
        s[0] = i;
        for (j=i+1; j <= 'z'-3; j++) {
            s[1] = j;
            for (k=j+1; k <= 'z'-2; k++ ) {
                s[2] = k;
                for (l=k+1; l <= 'z'-1; l++) {
                    s[3] = l;
                    for (m=l+1; m <= 'z'; m++) {
                        s[4] = m;
                        res[s] = index;
                        index++;
                    }
                }
            }
        }
    }
}



int main () {
    string line;
    dp();
    while (getline(cin, line))
    {
         cout << res[line] << endl;
    }
    return 0;
}