#include<iostream>
#include<vector>
using namespace std;

vector<int> dfs(vector<int> adj[], int vis[], int node, vector<int> &ls) {
    vis[node] = 1;
    ls.push_back(node);

    for (auto it : adj[node]) {
        if (!vis[it]) {
            dfs(adj, vis, it, ls);
        }
    }
    return ls;
}



int main() {
    int n, m;
    cin >> n >> m;

    vector<int> ls;
    vector<int> adj[n + 1];  // [n + 1] for 1 base indexing

    int vis[n + 1] = {0};

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int start = 1;

    vector<int> result = dfs(adj, vis, start, ls);

    for (auto it : result) {
        cout << it << " ";
    }
    cout << endl;
    
    return 0;
}