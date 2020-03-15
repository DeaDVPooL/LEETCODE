class CustomStack {
public:
    int maxSize;
    stack<int> s1,s2;
    CustomStack(int maxSize) {
        this->maxSize = maxSize;
    }
    
    void push(int x) {
        if(s1.size()>=maxSize)   return;
        s1.push(x);
    }
    
    int pop() {
        if(s1.empty())  return -1;
        int a = s1.top();
        s1.pop();
        return a;
    }
    
    void increment(int k, int val) {
        while(s1.size()>k)
        {
            s2.push(s1.top());
            s1.pop();
        }
        while(!s1.empty())
        {
            s2.push(s1.top()+val);
            s1.pop();
        }
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
