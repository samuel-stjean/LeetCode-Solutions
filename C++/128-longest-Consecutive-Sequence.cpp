class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // tc nlogn because of sorting algo, tc is constant. 
        if(nums.size() == 0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int res = 1;
        int temp = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]) continue;
            if(nums[i] == nums[i-1] + 1){
                temp++;
                res = max(temp, res);
                continue;
            }
            temp = 1;
        }
        return res;
    }
};
