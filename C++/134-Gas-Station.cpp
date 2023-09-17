class Solution {
public:
    
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // tc is O(n) and sc is constant
        int totalGas = 0;
        int totalCost = 0;
        int gal = 0;
        int res = 0;
        for(int i = 0; i < gas.size(); i++){
            totalGas += gas[i];
            totalCost += cost[i];
            gal  += gas[i] - cost[i];
            if(gal < 0){ 
                gal = 0; 
                res = i + 1;
            }
        }
        if(totalGas < totalCost) return -1;
        return res;
    }
};
