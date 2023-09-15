class Solution {
public:
    // the tc is O(n!*n) and the sc is O(n)
    void backtrack(vector<vector<int>>& res, vector<int>& nums, vector<int>& temp, vector<bool>& used){
        if(temp.size() == nums.size()){
            res.push_back(temp); return;
        }
        for(int i = 0; i < nums.size(); i++){
            if(!used[i]){
                used[i] = true;
                temp.push_back(nums[i]);
                backtrack(res,nums,temp, used);
                used[i] = false;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        vector<bool> used(nums.size(), false);
        backtrack(res,nums,temp, used);
        return res;
    }
};
