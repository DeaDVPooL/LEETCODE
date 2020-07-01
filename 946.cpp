class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i = 0,j = 0;
        stack<int> s;
        while(true)
        {
            if(j==popped.size()&&s.empty()) return true;
            else if(i==pushed.size()&&!s.empty()&&s.top()!=popped[j])   return false;
            if(i<pushed.size()) 
            {
                s.push(pushed[i]);
                i++;
            }
            while(s.top()==popped[j])
            {
                s.pop();
                j++;
                if(s.empty()||j==popped.size()) break;
            }  
        }
    }
};
