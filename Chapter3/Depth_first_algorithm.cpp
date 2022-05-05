#include <bits/stdc++.h>
using namespace std;
class Graph {
public:
    map<int, bool> visited;
    map<int, list<int> > adj;
    void addEdge(int c, int m);
    void DFS(int c);
};
void Graph::addEdge(int c, int m)
{
    adj[c].push_back(m); 
}
void Graph::DFS(int c)
{  
    visited[c] = true;
    cout << c << " ";
    list<int>::iterator i;
    for (i = adj[c].begin(); i != adj[c].end(); ++i)
        if (!visited[*i])
            DFS(*i);
}
int main()
{
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.DFS(2);
    return 0;
}
