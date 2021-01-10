#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    vector<int> graph[5];
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    for (int i = 0; i < 5; i++)
    {
        cout << "" << i << " =" << ' ';
        for (int j : graph[i])
        {
            cout << j << "-->";
        }
        cout << "NULL" << endl;
    }

    return 0;
}