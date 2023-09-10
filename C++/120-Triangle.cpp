class Solution {
public:
 // tc is O(n * m) where n is the number of levels and m is the size of intergers in the level. SC is constant as we allocate no extra space. 
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int i = triangle.size()-2; i >= 0; i--){
            for(int j = 0; j < triangle[i].size(); j++){
                triangle[i][j] = min(triangle[i][j] + triangle[i + 1][j], triangle[i][j] + triangle[i + 1][j + 1]);
            }
        }
        return triangle[0][0];
    }
};
