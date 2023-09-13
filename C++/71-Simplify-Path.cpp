class Solution {
public:
// the tc of this is O(n) as I iterate over the whole path. 
//the space complexity is O(n) as the stack may need to hold n elements. 
    string simplifyPath(string path) {
        stack<string> st;
        string res = "";
        string cur;
        path = path + "/";
        for(auto& it : path){
            if(it == '/'){
                if(cur == ".."){
                    if(!st.empty()) st.pop();
                }
                else if(cur != "" && cur != "."){
                    st.push(cur);
                }
                cur = "";
            }
            else{
                cur += it;
            }
        }
        while(!st.empty()){
            res = "/" + st.top() + res;
            st.pop();
        }

        if(res.size() == 0)return "/";

        return res;
    }
};
