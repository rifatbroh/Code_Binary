class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int val) {
        this->st1.push(val);
        // min value track rakhbo
        // if first time stack null
        
        if (this->st2.empty()){
            this->st2.push(val);
        }else{
            this->st2.push(min(val, this->st2.top()));
        }
    }
    
    void pop() {
        this->st1.pop();
        this->st2.pop();
    }
    
    int top() {
        return this->st1.top();
    }
    
    int getMin() {
        return this->st2.top();
    }
    private:
        stack <int> st1;
        stack <int> st2;
};
/*
    UNIQUE TEST
    -----------
    stack_1 = [normal value push korbo]
    stack 2 = [min value track rakhbo]
    constructor thats why use this to access stack

    return korbo stack 2;
*/
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */