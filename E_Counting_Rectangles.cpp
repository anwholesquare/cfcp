#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
        ll n, m, i, j, X, Y, s;
        cin>>n>>m;
        vector<vector<ll> >v(1005,vector<ll>(1005)),v1(1005,vector<ll>(1005));
        ll x, y;
        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            v[x][y]+=(x*y);
            v1[x][y]+=(x*y);
        }
        for(i=1;i<=1000;i++)for(j=1;j<=1000;j++)v[i][j]+=v[i][j-1];
        for(i=1;i<=1000;i++)for(j=1000;j>0;j--)v1[i][j]+=v1[i][j+1];
        for(i=0;i<m;i++)
        {
            cin>>x>>y>>X>>Y;
            s=0;
            for(j=x+1;j<X;j++)
            {
                s+=v[j][1000];
                s-=v[j][y];
                s-=v1[j][Y];
            }
            cout<<s<<endl;
        }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve ();
    }
}
