class Solution {
public:
    // tc is O(n) where n is the number of words in s. the space complexity is O(n)
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> c2w;
        unordered_map<string, char> w2c;
        vector<string> v;
        string word;
        stringstream iss(s);
        while (iss >> word){
            v.push_back(word);
        }

        if(pattern.size() != v.size()) return false;

        for(int i = 0; i < pattern.size(); i++){
            if(c2w.count(pattern[i]) && c2w[pattern[i]] != v[i]) return false;
            if(w2c.count(v[i]) && w2c[v[i]] != pattern[i]) return false;
            c2w[pattern[i]] = v[i];
            w2c[v[i]] = pattern[i];
        }

        return true;
    }
};
