#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

vector<int> bfs(unordered_map<int, vector<int>>& adj) {
    int V = adj.size();
    vector<bool> visited(V, false);
    vector<int> res;
    
    queue<int> q;
    
    int src = 0;
    visited[src] = true;
    q.push(src);

    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        res.push_back(curr);

        // visit all the unvisited
        // neighbours of current node
        for (int x : adj[curr]) {
            if (!visited[x]) {
                visited[x] = true;
                q.push(x);
            }
        }
    }
    
    return res;
}

int main() {
    cout << "Name: Prathmesh Ravindra Salunkhe" << endl;
    cout << "Roll No.: 262240013" << endl;
    int V, E;
    cout << "Enter the number of vertices: ";
    cin >> V;
    
    cout << "Enter the number of edges: ";
    cin >> E;

    unordered_map<int, vector<int>> adj;
    
    for (int i = 0; i < E; i++) {
        int u, v;
        cout << "Enter edge " << i + 1 << " (u v): ";
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // For undirected graph
    }
    
    vector<int> res = bfs(adj);

    for (int i : res)
        cout << i << " ";
}