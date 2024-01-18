class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> map;
        int res = 0;
        int max = 0;
        for(int i = 0; i< nums.size(); i++){
            map[nums[i]]++;
            if(map[nums[i]] > max){
                max = map[nums[i]];
                res = nums[i];
            }
        }
        return res;
    }
};
