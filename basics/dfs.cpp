#include<iostream>
#include<vector>
using namespace std;


vector<int> DFS(vector<vector<int>> &adj, vector<int> &vis, vector<int> &ls, int node) {
    vis[node] = 1;
    ls.push_back(node);

    for (int i = 0; i < vis.size(); i++) {
        if (adj[node][i] == 1 && vis[i] == 0) {
            vis[i] = 1;
            DFS(adj, vis, ls, i);
        }
    }
    return ls;
}



int main() {
    int n, m;

    cin >> n >> m;
    vector<vector<int>> adj(n, vector<int>(n, 0));
    vector<int> vis(n, 0);
    vector<int> ls;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    cout << "Ajd matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }   
    cout << endl;

    vector<int> dls = DFS(adj, vis, ls, 0);

    cout << "DFS: ";
    for (auto it : dls) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
    
    
    
    
    
    
    
    
    
    
    
    // int n, m;
    // cin >> n >> m;

    // vector<int> ls;
    // vector<int> adj[n + 1];  // [n + 1] for 1 base indexing

    // int vis[n + 1] = {0};

    // for (int i = 0; i < m; i++) {
    //     int u, v;
    //     cin >> u >> v;

    //     adj[u].push_back(v);
    //     adj[v].push_back(u);
    // }

    // int start = 1;

    // vector<int> result = dfs(adj, vis, start, ls);

    // for (auto it : result) {
    //     cout << it << " ";
    // }
    // cout << endl;
    
    // return 0;
}