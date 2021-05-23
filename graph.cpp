#include <iostream>
#include <vector>
#include <map>
using namespace std;

void print(vector<vector<int>> &graph)
{
    for (int i = 0; i < graph.size(); i++)
    {
        for (int j = 0; j < graph.size(); j++)
        {
            cout << graph[i][j] << ' ';
        }
        cout << endl;
    }
}

void addGraph(vector<vector<int>> &a, int r, int c)
{
    a[r][c] = 1;
    a[c][r] = 1;
}
void dfs(map<int, bool> &visited, vector<vector<int>> &graph, int v)
{
    visited[v] = true;
    cout << endl
         << v << ' ';

    for (int i = 0; i < graph.size(); i++)
    {
        if (!visited[i])
            dfs(visited, graph, i);
    }
}
int main()
{

    vector<vector<int>> graph(10, vector<int>(10, 0));
    map<int, bool> visited;

    addGraph(graph, 0, 1);
    addGraph(graph, 0, 9);
    addGraph(graph, 1, 2);
    addGraph(graph, 2, 0);
    addGraph(graph, 2, 3);
    addGraph(graph, 9, 3);

    print(graph);
    dfs(visited, graph, 1);
}
