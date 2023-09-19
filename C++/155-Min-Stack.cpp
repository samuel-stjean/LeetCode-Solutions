class MinStack {
public:
//  tc is O(1) as very function runs in constant time, the sc is O(n) for the stacks
    stack<int> s;
    stack<int> minSt;
    MinStack() {
    }
    
    void push(int val) {
        s.push(val);
        if(minSt.empty() || val <= getMin()){
            minSt.push(val);
        }
    }
    
    void pop() {
        if(s.top() == getMin()){
            minSt.pop();
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
