#include<bits/stdc++.h>
using namespace std;

vector<int> BFS(vector<vector<int>> &adj, int v, vector<int> vis) {
    queue<int> q;
    vector<int> result;

    q.push(0);
    vis[0] = true;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        result.push_back(curr);

        for (int i = 0; i < v; i++) {
            if (adj[curr][i] == 1 && vis[i] == false) {
                vis[i] = true;
                q.push(i);
            }
        }
    }
    return result;
}

int main() {
    int n, m;

    cin >> n >> m;
    vector<vector<int>> adj(n, vector<int>(n, 0));
    vector<int> vis(n, 0);

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

    vector<int> bfs = BFS(adj, n, vis);

    cout << "BFS: ";
    for (auto it : bfs) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
    
}