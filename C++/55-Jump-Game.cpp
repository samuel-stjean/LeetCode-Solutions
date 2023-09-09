class Solution {
public:
    //greedy solution in O[n] time using O[n] space
    bool canJump(vector<int>& nums) {
        int goal = nums.size()-1;
        for(int i = goal; i >= 0; i--){
            if(i + nums[i] >= goal){
                goal = i;
            }
        }
        if(goal == 0)
        {
            return true;
        }
        return false;
    }
};
