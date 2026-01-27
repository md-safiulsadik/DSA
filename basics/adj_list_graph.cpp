#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> BFS(int V, vector<int> adj[], int start) {
    
    int vis[V+1] = {0};
    vis[start] = 1;
    
    queue<int> q;
    q.push(start);

    vector<int> bfs;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for (auto it : adj[node]) {
            if (!vis[it]) {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;    
}   


int main() {
    int n, m;

//    cout << "Number of Nodes: ";
    cin >> n;
//    cout << "Number of edges: ";
    cin >> m;

    vector<int> adj[n+1];
 //   cout << "Connections: ";

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    for (int i = 1; i < n+1; i++) {
        cout << i << " -> ";

        for (auto nbr : adj[i]) {
            cout << nbr << " ";
        }
        cout << endl;
    }
    
    int start;
    cout << "Starting node: ";
    cin >> start;

    vector bfs = BFS(n, adj, start);

    cout << "BFS search result: "; 
    for (auto it : bfs) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}