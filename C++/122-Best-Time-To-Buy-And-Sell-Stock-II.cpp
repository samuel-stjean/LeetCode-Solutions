class Solution {
public:
    // o(n) tc and o(1) space complexity. Buy every local min and you will end up with the total max. 
    int maxProfit(vector<int>& prices) {
        int res = 0;
        for(int i = 0; i < prices.size()-1;i++)
        {
            if(prices[i] < prices[i+1]){
                res += prices[i+1] -prices[i];
            }
        }
        return res;
    }
};
