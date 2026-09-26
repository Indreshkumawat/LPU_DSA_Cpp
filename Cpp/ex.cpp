#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int getMinInconvenience(vector<vector<int>> grid) {
    int n = grid.size();
    if (n == 0) return 0;
    int m = grid[0].size();

    vector<vector<int>> dist(n, vector<int>(m, 1e9));
    queue<pair<int, int>> q;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == 1) {
                dist[i][j] = 0;
                q.push({i, j});
            }
        }
    }

    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    while (!q.empty()) {
       auto p = q.front();
int x = p.first;
int y = p.second;
        q.pop();

        for (int k = 0; k < 8; ++k) {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (dist[nx][ny] > dist[x][y] + 1) {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }

    int left = 0, right = max(n, m);
    int ans = right;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        int min_x = 1e9, max_x = -1e9;
        int min_y = 1e9, max_y = -1e9;
        bool needs_new_center = false;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (dist[i][j] > mid) {
                    needs_new_center = true;
                    min_x = min(min_x, i);
                    max_x = max(max_x, i);
                    min_y = min(min_y, j);
                    max_y = max(max_y, j);
                }
            }
        }

        if (!needs_new_center) {
            ans = mid;
            right = mid - 1;
        } else {
            int lx = max(0, max_x - mid);
            int rx = min(n - 1, min_x + mid);
            int ly = max(0, max_y - mid);
            int ry = min(m - 1, min_y + mid);

            if (lx <= rx && ly <= ry) {
                ans = mid;
                right = mid - 1; 
            } else {
                left = mid + 1; 
            }
        }
    }

    return ans;
}

int main() {
    // Test Case 1: Sample Case 0
    vector<vector<int>> grid1 = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
    cout << "Test Case 1 (Sample Case 0) Output: " << getMinInconvenience(grid1) << " | Expected: 2" << endl;

    // Test Case 2: Sample Case 1
    vector<vector<int>> grid2 = {
        {0}
    };
    cout << "Test Case 2 (Sample Case 1) Output: " << getMinInconvenience(grid2) << " | Expected: 0" << endl;

    // Test Case 3: Question 1 Example
    vector<vector<int>> grid3 = {
        {0, 0, 0, 1},
        {0, 0, 0, 1}
    };
    cout << "Test Case 3 (Question Example) Output: " << getMinInconvenience(grid3) << " | Expected: 1" << endl;

    return 0;
}