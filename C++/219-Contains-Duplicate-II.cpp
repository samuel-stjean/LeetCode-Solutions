class Solution {
public:
// tc is O(n) for the number of elements in nums, and the space complexity is also O(n) for the map
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size(); i++){
            if(mp.count(nums[i])){
                if(abs(i-mp[nums[i]]) <= k) return true;
            }
            mp[nums[i]] = i;
        }
        return false; 
    }
};
