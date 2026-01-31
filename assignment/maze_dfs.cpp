#include<bits/stdc++.h>
using namespace std;

int dfs(int r, int c, vector<vector<int>>& maze, vector<vector<int>>& vis) {
    // extract the size of the maze
    int R = maze.size();
    int C = maze[0].size();

    // the base condition
    // if we got out from the maze
    // if already visited
    // or maze value not zero(0) we return 0
    // means no region found
    if (r < 0 || c < 0 || r >= R || c >= C || vis[r][c] || maze[r][c]) 
        return 0;

    // if found region: we make it visited 
    vis[r][c] = 1;
    // if found the init size is 1
    int size = 1;

    // we explore the four directions 
    // if region found add size 
    // in this way we will find the total size of region
    size += dfs(r+1, c, maze, vis);
    size += dfs(r-1, c, maze, vis);
    size += dfs(r, c+1, maze, vis);
    size += dfs(r, c-1, maze, vis);

    // return the size
    return size;
}

int main() {
    // Take input from the user
    int r, c;
    cin >> r >> c;

    // a 2D maze
    vector<vector<int>> maze(r, vector<int>(c));

    // input value of the maze
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int n;
            cin >> n;
            maze[i][j] = n;
        }
    }

    // A 2D visited vector that init with 0
    // if we visit a node we make the value value 1 to mark visited
    vector<vector<int>> vis(r, vector<int>(c ,0));

    // This is to count the number of region
    int cnt = 0;
    // A vector to keep track of size of each region
    vector<int> sizes;

    // Go through every value in a the 2D maze
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            // If maze value zero(0) means it's a island 
            // and we haven't visited the node already
            // then we found new region so in increment the count and 
            // start exploring
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