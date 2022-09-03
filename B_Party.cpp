#include <bits/stdc++.h>
using namespace std;
#define ll          long long
#define vi          vector<int>
#define vll         vector<ll>
#define pll         pair<ll, ll>
#define pii         pair<int, int>
#define ld          long double
#define ff          first
#define ss          second
#define vs          vector<string>
#define vpll        vector<pll>
#define vb          vector<bool>
#define mp          make_pair
#define pb          push_back
#define endl        '\n'



template <typename T, typename Y> ostream& operator << (ostream& x, const pair<T,Y>& v) {x<<v.ff<<" "<<v.ss; return x;}
template <typename T, typename Y> ostream& operator << (ostream& x, const map<T, Y>& v) {for (auto it : v) x << it.ff << ": " << it.ss << endl; return x;}
template <typename T, typename Y> istream& operator >> (istream& x, pair<T,Y>& v) {x>>v.ff>>v.ss; return x;}
template <typename T> istream& operator >> (istream& x,vector<T>& v) {for(T& it:v) x>>it;return x;}
template <typename T> ostream& operator << (ostream& x,const vector<T>& v) {for(int i=0;i<(int)v.size();i++) x<<v[i]<<" ";return x;}
template <typename T> ostream& operator << (ostream& x,const set<T>& v) {for(auto it:v) x<<it<<" ";return x;}
template <typename T> ostream& operator << (ostream& x,const multiset<T>& v) {for(auto it:v) x<<it<<" ";return x;}




int main(){


    int tc = 0, tt = 1;
    cin >> tt;
    while (tc++ < tt)
    {

        ll n, m;
        cin >> n >> m;
        vll arr(n);
        cin >> arr;


        map<ll, vll> adj;


        map<ll, ll> freq;
        for(int i = 0; i < m; i++){
            ll a, b; cin >> a >> b;
            adj[a].pb(b);
            adj[b].pb(a);
            freq[a]++, freq[b]++;
        }

        if(m%2 == 0){
            cout << 0 << endl;
            continue;
        }

        vector<pll> values;
        ll idx = 1;
        for(auto x: arr){
            values.pb({x, idx++});
        }

        sort(values.begin(), values.end());


        ll ans = 2e18;
        for(auto x: values){
            if(freq.find(x.ss) != freq.end()){
                if(freq[x.ss]%2){
                    ans = min(ans, x.ff);
                }else{
                    for(auto y: adj[x.ss]){
                        if(freq[y]%2 == 0){
                            ans = min(ans, x.ff + arr[y-1]);
                        }
                    }
                }
            }
        }

        cout << ans << endl;






    }

    return 0;
}