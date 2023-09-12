class Solution {
public:
// tc is O(n) as we will go through all the elements in the vector once. Even though we have a nested while loop, it is only updating the second pointer. the space complexity is constant. 
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = INT_MAX;
        int sum = 0;
        int l = 0;
        for(int r = 0; r < nums.size(); r++){
            sum += nums[r];
            while(sum >= target){
                res = min(r - l + 1, res);
                sum -= nums[l];
                l++;
            }
        }
        if(res == INT_MAX) return 0;
        return res;
    }
};
