class Solution {
public:
    int hIndex(vector<int>& citations) {
        int res = 1;
        while(res <= citations.size()){
            int temp = 0;
            for(int i = 0; i < citations.size(); i++){
                if(citations[i] >= res){
                    temp++;
                }
            }
            if(temp > res){
                res++;
                continue;
            }
            else if(temp < res){
                return res-1;
            }
            else{
                return res;
            }
        }
        return res;
    }
};
