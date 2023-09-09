class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // time complexity is o(m * nlogn) m is the number of string and n is the length of the string and nlogn because of the sorting function. space cmplexity is o (m) for holding a map of possibly size m and vector of possibly size m 
        unordered_map<string,vector<string>> myMap;
        for(auto& s : strs){
            string temp = s;
            sort(temp.begin(),temp.end());
            myMap[temp].push_back(s);
        }
        vector<vector<string>> res;
        for(auto& pair : myMap){
            res.push_back(pair.second);
        }
        return res;
    }
};
