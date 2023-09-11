class Solution {
public:
// the tc of this boils down to O(m * n) as we iterate over every tile in the grid. 
//We allocate no extra memory to complete this function as we solve the problem inside 
//the passed in grid so the space complexity is constant. 

    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 1; i < m; i++){
            grid[i][0] = grid[i][0] + grid[i-1][0];
        }
        for(int i = 1; i < n; i++){
            grid[0][i] = grid[0][i] + grid[0][i-1];
        }
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                grid[i][j] = grid[i][j] + min(grid[i-1][j], grid[i][j-1]);
            }
        }
        return grid[m-1][n-1];
    }
};
