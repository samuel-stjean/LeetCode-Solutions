class Solution {
public:
//tc is o(n) where n is the size of the string. space complexity is constant.
    bool isIsomorphic(string s, string t) { 
        int ar1[256] = {0};
        int ar2[256] = {0};
        for(int i = 0; i < s.size(); i++){
            if( ar1[s[i]] != ar2[t[i]]) return false;
            ar1[s[i]] = i + 1;
            ar2[t[i]] = i + 1;
        }
        return true;
    }
};
