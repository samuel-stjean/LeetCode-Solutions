class Solution {
public:
    int jump(vector<int>& nums) {
        // o(n) tc & o(1) sc, greedy algo. create a window, l->r, of possible jumps we could have made from the last window. 
        int res = 0;
        int l = 0;
        int r = 0;
        while(r < nums.size() - 1){
            res++;
            int newR = 0;
            for (int i = l; i <= r; i++) {
				newR = max(newR, i + nums[i]);
			}
            l = r + 1;
            r = newR;
        }
        return res;
    }
};
