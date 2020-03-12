class MinStack {
public:
    stack<int> s;
    stack<int> min;
    
    void push(int x) {
        s.push(x);
        if(min.empty() || min.top() >= x) {
            min.push(x);
        }
    }//这里 if 语句里面是 >= 的原因是，假设有两个相同的最小值8，
    //如果只存一个（只填 > ），假设两个 stack 同时pop了一个8，
    //那么其实最小值还有8但是已经被 pop 掉了

    void pop() {
        if(s.top() == min.top()) {
            s.pop();
            min.pop();
        } else {
            s.pop();
        }
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
