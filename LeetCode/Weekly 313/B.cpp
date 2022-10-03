class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int R = grid.size(), C = grid[0].size();
        int ms = INT_MIN;
        for (int i = 0; i < R - 2; i++) {
            for (int j = 0; j < C - 2; j++) {
                int cs = (grid[i][j] + grid[i][j + 1] + grid[i][j + 2]) + (grid[i + 1][j + 1]) +
                         (grid[i + 2][j] + grid[i + 2][j + 1] + grid[i + 2][j + 2]);

                ms = max(ms, cs);
            }
        }
        return ms;
    }
};
