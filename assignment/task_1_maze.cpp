#include<bits/stdc++.h>
using namespace std;


int find_dist(vector<vector<int>>& maze, int R, int C) {
    int n = maze.size();
    int m = maze[0].size();
    vector<vector<int>> dist(n, vector<int>(m, -1));

    queue<pair<int, int>> q;
    q.push({0, 0});
    dist[0][0] = 0;

    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    while (!q.empty()) {
        auto curr = q.front();
        int r = curr.first;
        int c = curr.second;

        q.pop();

        if (r == R-1 && c == C-1) return dist[r][c];

        for (int i = 0; i < 4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];

            if (nr >= 0 && nr < R && nc >= 0 && nc < C
                && dist[nr][nc] == -1 && maze[nr][nc] == 0) {
                    dist[nr][nc] = dist[r][c] + 1;
                    q.push({nr, nc}); 
                }
        }
    }
    return -1;
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

    // pair<int, int> src(0, 0);
    // pair<int, int> dist(r-1, c-1);

    int result = find_dist(maze, r, c);
    cout << "Minimum steps: " << result << endl;
    
    return 0;
}