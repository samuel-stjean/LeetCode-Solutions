class Solution {
public:
// tc is O(n) as I make a stack of n words then empty it. the space complexity is also O(n)
    string reverseWords(string s) {
       stack<string> hold;
       string temp = "";
       string res = "";
       for(int i = 0; i < s.size(); i++){
           if(s[i] == ' ' && temp.size() == 0){
               continue;
           }
           if(s[i] == ' '){
               hold.push(temp);
               temp = "";
               continue;
           }
           if(i == s.size()-1){
               temp += s[i];
               hold.push(temp);
               break;
           }
           temp += s[i];
           
       }
       cout<< hold.size();
       while(hold.size() > 1){
           res += hold.top() + " ";
           hold.pop();
       }
       res += hold.top();
       return res;
    }
};
