#include<bits/stdc++.h>
using namespace std;

vector<int>V[200];
int level[200]; 
int par[200]; 


void BFS(int src)
{
    queue<int>Q;
    Q.push(src);
    level[src] = 0;

    while(!Q.empty())
    {
        int X = Q.front();
        Q.pop();

        for(int j = 0; j < V[X].size(); j++)
        {
            int Y = V[X][j];
            if(level[Y] == 0)
            {
                level[Y] = level[X] + 1;
                par[Y] = X;
                Q.push(Y);

            }
        }
    }
}

void FOR(int i)
{
    if(par[i] != i)
    {
        FOR(par[i]);
        printf("%d -> ", i);
    }
}



int main()
{
    int node_no = 7, edge_no = 6;
    cout << "Enter number of nodes: "; cin >> node_no;
    cout << endl << "Enter number of edges: "; cin >> edge_no;
    cout << endl;

    for(int i = 1; i <= edge_no; i++)
    {
        int nodeA, nodeB;
        cin>>nodeA>>nodeB;
        V[nodeA].push_back(nodeB); // for directed graph
    }

    //set parents
    for(int i = 0; i <= node_no; i++)par[i] = i;

    //Print Node Adjacency List by traversing the list
    cout<<"Adjacency List:"<<endl;
    for(int i = 1; i <= node_no; i++)
    {
        printf("%d -> ", i);
        for(int j = 0; j < V[i].size(); j++)
        {
            printf("%d ", V[i][j]);
        }
        printf("\n");
    }
    cout<<endl;


    int source = 1;
    BFS(source);

    int dest = 7;
    cout<<level[dest]<<endl; 

    cout<<source<<"-> ";
    FOR(dest);
}