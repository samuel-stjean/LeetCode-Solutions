class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        set<vector<int>> temp;
        int sum;
        for(int i = 0; i < nums.size(); i++){
            int j = i +1;
            int k = nums.size()-1;
            while(j < k){
                sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    temp.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum < 0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        for(auto it : temp)
        {
            res.push_back(it);
        }
        return res;
    }
};
