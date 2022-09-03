#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll t,n,i,x,mx,mn,f,j,s,r,y,c,m,k;
    while(t--)
    {
        cin>>n;
        vector<ll>v(n+1),v1(n+1);
        for(i=1;i<=n;i++)
        {
            cin>>v[i];
            v1[i]=i;
        }
        set<ll>S;
        c=0;
        for(i=1;i<n;i++)
        {
            if(v1[v[i]]>v1[v[i+1]])
            {
                S.insert(v[i]);
                c+=S.size();
                for(auto it:S)v1[it]=0;
                S.clear();
            }
            else if(v1[v[i]])S.insert(v[i]);
        }
        cout<<c<<endl;
    }

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}