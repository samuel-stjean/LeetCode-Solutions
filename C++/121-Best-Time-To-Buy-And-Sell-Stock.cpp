class Solution {
public:
    // O(n) tc and O(1) sc. Update the lowest price we have encountered, 
                  subtract lowest price from every day and update the gretest difference. 
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int low = INT_MAX;
        int hold = 0;
        for(int i = 0; i < prices.size();i++)
        {
            if(prices[i] < low){
                low = prices[i];
            }
            hold = prices[i] - low;
            if(hold > res){
                res = hold;
            }
        }
        return res;
    }
};
