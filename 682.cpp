class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        int p1 = 0,p2 = 0,sum = 0;
        for(int i=0;i<ops.size();i++)
        {
            if(!s.empty()&&ops[i][0]=='C')
            {
                sum-=s.top();
                s.pop();
                if(s.empty())
                {
                    p1 = 0;
                    p2 = 0;
                }else
                {
                    p1 = s.top();
                    s.pop();
                    p2 = s.empty()?0:s.top();
                    s.push(p1);
                }
            }
            else if(ops[i][0]=='D')
            {
                p2 = p1;
                p1 = 2*p1;
                sum+=p1;
                s.push(p1);
            }else if(ops[i][0]=='+')
            {
                int tmp = p2;
                p2 = p1;
                p1 = tmp+p1;
                sum+=p1;
                s.push(p1);
            }else
            {
                p2 = p1;
                p1 = atoi(ops[i].c_str());
                sum+=p1;
                s.push(p1);
            }
        }
        return sum;
    }
};
