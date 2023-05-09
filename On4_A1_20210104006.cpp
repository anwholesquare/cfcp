#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

vector<bool> visited;

void dfs(vector<int> adj[],int v) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(adj,u);
    }
}


void solve () {
    int city, roads;
    cin >> city >> roads;

    vector<int> adj[city+1];
    


    for (int i =0; i<=city; i++) {
        visited.push_back(0);
    }
    int r = roads;
    while (r--) {
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bool allvis = 0;
    vector<int> cons;
    int start = 1;

    while (allvis ==0) {
        bool got = 0;
        cons.push_back(start);
        dfs(adj, start);
        for (int i =1; i<=city; i++) {
            if (visited[i] == false) {
                start = i; got = 1; break;
            }
        }

        if (!got) allvis = 1;
    }

    cout << cons.size() -1 << endl;
    for (int i =0; i<cons.size()-1; i++) {
        cout << cons[i] << " " << cons[i+1] << endl;
    }


    



}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}