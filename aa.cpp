#include <bits/stdc++.h>
using namespace std;

int v;
#define INF 9999999

int graph[100000][100000];


void floydWarshall()
{

	int i, j, k;
	for (k = 0; k < v; k++) {
		
		for (i = 0; i < v; i++) {
			
			for (j = 0; j < v; j++) {
				
				if (graph[i][j] > (graph[i][k] + graph[k][j])
					&& (graph[k][j] != INF
						&& graph[i][k] != INF))
					graph[i][j] = graph[i][k] + graph[k][j];
			}
		}
	}

	
}



// Driver's code
int main()
{
    cin >> v;
    
    for (int i =0; i<=v; i++) {
        for (int j =0; j <=v; j++) {
            graph[i][j] = INF;
        }
    }
	int n;
    cin >> n;
    while (n--) {
        int u,v,w;
        cin >> u >> v >> w;
        graph[u][v] = w;
    }
    

	floydWarshall();

    int q;
    cin >> q;
    while (q--) {
        int u, v;
        cin >> u >> v;
        long long sum  = 0;

        for (int i =1; i<=v; i++) {
            if (i == u || i == v) continue;
            sum = min(graph[u][i], graph[v][i] );
        }
        cout << sum << endl;

    }
	return 0;
}
