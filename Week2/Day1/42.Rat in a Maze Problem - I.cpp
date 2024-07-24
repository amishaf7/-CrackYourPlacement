void bfs(int row, int col, int dr[], int dc[], vector<vector<int>> &vis, vector<vector<int>> &mat, char dir[], vector<string> &paths, string path) {
    int n = mat.size();
    if (row == n - 1 && col == n - 1) {
        paths.push_back(path);
        return;
    }

    vis[row][col] = 1;

    for (int i = 0; i < 4; i++) {
        int nrow = row + dr[i];
        int ncol = col + dc[i];

        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < n && !vis[nrow][ncol] && mat[nrow][ncol] == 1) {
            bfs(nrow, ncol, dr, dc, vis, mat, dir, paths, path + dir[i]);
        }
    }

    vis[row][col] = 0; // Backtrack
}

vector<string> findPath(vector<vector<int>> &mat) {
    int n = mat.size();
    vector<string> paths;
    vector<vector<int>> vis(n, vector<int>(n, 0));
    int dr[] = {1, -1, 0, 0};
    int dc[] = {0, 0, 1, -1};
    char dir[] = {'D', 'U', 'R', 'L'};

    if (mat[0][0] == 0) {
        return paths; // No path if starting cell is blocked
    }

    bfs(0, 0, dr, dc, vis, mat, dir, paths, "");

    return paths;
}
