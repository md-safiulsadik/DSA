#include<bits/stdc++.h>
using namespace std;


int find_dist(vector<vector<int>>& maze, int R, int C) {
    // Getting the size of the maze
    int n = maze.size();
    int m = maze[0].size();

    // Create a 2D vector for distance calculation
    // this stores the steps from starting node to all the visited other node 
    vector<vector<int>> dist(n, vector<int>(m, -1));

    // Queue for bfs
    // this Queue keep track of the neighbor
    queue<pair<int, int>> q;
    // Push the starting node
    q.push({0, 0});
    // The initial node took zero(0) steps
    dist[0][0] = 0;

    // This are coordinate that that helps to check
    // Up-Down-Left-Right
    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    while (!q.empty()) {
        // first element from the queue
        auto curr = q.front();
        // Coordinate of the Poped item
        int r = curr.first;
        int c = curr.second;

        q.pop(); // pop() the Queue

        // This is the logic for final result
        // If we reached the desired node return the value from 
        // the distance storing 2D vector
        if (r == R-1 && c == C-1) return dist[r][c];

        for (int i = 0; i < 4; i++) {
            // we check the for direction
            int nr = r + dr[i];
            int nc = c + dc[i];

            // Logic: If we are inside the maze 
            // if distance vectors value haven't or we haven't visited this node
            // and if the maze has value zero(0)
            // then we push the node in the queue
            if (nr >= 0 && nr < R && nc >= 0 && nc < C
                && dist[nr][nc] == -1 && maze[nr][nc] == 0) {
                    dist[nr][nc] = dist[r][c] + 1;
                    q.push({nr, nc}); 
                }
        }
    }
    // If we can't reach the destination we return -1
    return -1;
}


int main() {
    // Input row-col of maze
    int r, c;
    cin >> r >> c;

    // 2D vector to rep. maze
    vector<vector<int>> maze(r, vector<int>(c));

    // Taking user input
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int n;
            cin >> n;
            maze[i][j] = n;
        }
    }

    // Calling the distance func
    int result = find_dist(maze, r, c);
    cout << "Minimum steps: " << result << endl;
    
    return 0;
}