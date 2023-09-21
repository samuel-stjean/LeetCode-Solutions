class Solution {
public:
   // tc is O(n) as I loop through all the tokens and the space complexity is O(n) for the stack
    int helper(string op, int a, int b){
        if(op == "-") return a - b;
        if(op == "/") return a / b;
        if(op == "*") return a * b;
        return a + b;
    }     
    int evalRPN(vector<string>& tokens) {
        int res = 0;
        std::stack<int> stack;
        set<string> op{"+", "-", "*", "/"};
        for (string& s : tokens) {
            if (!op.count(s)) {
                stack.push(stoi(s));
            } else {
                int op1 = stack.top();
                stack.pop();
                int op2 = stack.top();
                stack.pop();
                stack.push(helper(s, op2, op1));
            }
        }
        return stack.top();
    }
};
