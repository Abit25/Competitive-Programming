#include <iostream>
#include <vector>

using namespace std;

class Graph
{

    int V;
    vector<vector<int>> adj;

public:
    Graph(int V)
    {
        this->V = V;
        for (int i = 0; i < V; i++)
        {
            vector<int> lst;
            adj.push_back(lst);
        }
    }

    void addEdge(int from, int to)
    {
        adj[from].push_back(to);
    }

    void DFSUtil(int start_node, bool visited[])
    {
        visited[start_node] = true;
        cout << start_node << " ";
        for (int i = 0; i < adj[start_node].size(); i++)
        {
            if (!visited[adj[start_node][i]])
            {
                DFSUtil(adj[start_node][i], visited);
            }
        }
    }

    void DFS(int start_node)
    {
        bool *visited = new bool[V];
        for (int i = 0; i < V; i++)
        {
            visited[i] = false;
        }
        DFSUtil(start_node, visited);
    }
};

int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.DFS(2);
    return 0;
}
