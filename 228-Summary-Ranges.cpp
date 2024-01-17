class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<vector<int>> res;
        vector<string> sub;
        if(nums.size() == 0){
            return sub;
        }
        vector<int> temp;
        temp.push_back(nums[0]);
         for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] + 1 == nums[i]) {
                temp.push_back(nums[i]);
            } else {
                res.push_back(temp);
                temp.clear();
                temp.push_back(nums[i]);
            }
        }
        res.push_back(temp);
        
        for(auto it: res){
            if(it.size() == 1){
                sub.push_back(to_string(it[0]));
            }
            else{
                string tp_str = to_string(it[0]) + "->" + to_string(it[it.size()-1]);
                sub.push_back(tp_str);
            }
        }
        return sub;
    }
};
