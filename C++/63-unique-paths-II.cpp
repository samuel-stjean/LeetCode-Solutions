class Solution {
public:
    // tc is O(m*n) because I pass through every tile in the grid. the space complexity is O(n) because 
    //I allocate a vector of size n to hold onto the dp solution. 
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        if(obstacleGrid[m-1][n-1] == 1) return 0;
        vector<int> dp(n, 0);
        dp[0] = 1;
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(obstacleGrid[i][j] == 1){
                    dp[j] = 0;
                    continue;
                }
                if(j > 0){
                    dp[j] += dp[j-1];
                }
            }
        }
        return dp[n-1];
    }
};
