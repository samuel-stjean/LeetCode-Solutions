class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size()-1;
        int res;
        while(i <= j){
            int mid = (i+j)/2;
            if(target < nums[mid]){
                j = mid-1;
                res = j+1;
            }
            else if(target > nums[mid]){
                i = mid+1;
                res = i;
            }
            else{
                return mid;
            }
        }
        return res;
    }
};
