#include<bits/stdc++.h>
using namespace std;
#define INF 1e18
#define MAXN 100005

vector<pair<int, long long>> adj[MAXN];  // Adjacency list representation of the graph
long long dist[MAXN];  // The array that stores minimum distance from source

void Dijkstra(int source) {
    for(int i = 0; i < MAXN; i++) {
        dist[i] = INF;
    }

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;

    pq.push({0, source});
    dist[source] = 0;

    while(!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for(auto &c : adj[u]) {
            int v = c.first;
            long long weight = c.second;

            if(dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M, Q;
    cin >> N >> M;

    for(int i = 0; i < M; i++) {
        int u, v;
        long long w;
        cin >> u >> v >> w;

        adj[u].push_back({v, w});
        adj[v].push_back({u, w});  // If the graph is undirected
    }

    cin >> Q;

    while(Q--) {
        int S, T;
        cin >> S >> T;

        Dijkstra(S); // Compute shortest path from city S
        long long min_cost_S = dist[T];

        Dijkstra(T); // Compute shortest path from city T
        long long min_cost_T = dist[S];

        cout << min(min_cost_S, min_cost_T) << "\n";
    }

    return 0;
}
