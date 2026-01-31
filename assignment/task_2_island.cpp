#include<bits/stdc++.h>
using namespace std;

int dfs(int r, int c, vector<vector<int>>& maze, vector<vector<int>>& vis) {
    int R = maze.size();
    int C = maze[0].size();

    if (r < 0 || c < 0 || r >= R || c >= C || vis[r][c] || maze[r][c]) 
        return 0;

    vis[r][c] = 1;
    int size = 1;

    size += dfs(r+1, c, maze, vis);
    size += dfs(r-1, c, maze, vis);
    size += dfs(r, c+1, maze, vis);
    size += dfs(r, c-1, maze, vis);

    return size;
}

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<int>> maze(r, vector<int>(c));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int n;
            cin >> n;
            maze[i][j] = n;
        }
    }

    vector<vector<int>> vis(r, vector<int>(c ,0));
    int cnt = 0;
    vector<int> sizes;

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            if (maze[i][j] == 0 && !vis[i][j]) {
                cnt++;
                sizes.push_back(dfs(i , j, maze, vis));
            }
        }
    }
    
    cout << "Number of regions: " << cnt << endl;
    cout << "Region sizes: ";

    for (auto it : sizes) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}