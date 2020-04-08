class Solution {
public:
    bool buddyStrings(string A, string B) {
        int cnt = 0,index1 = -1,index2 = -1,lenA = A.size(),lenB = B.size(),flag = 0;
        if(lenA!=lenB)  return false;
        unordered_set<char> s;
        for(int i=0;i<lenB;i++)
        {
            if(!flag&&s.count(A[i])==1) flag = 1;
            s.insert(A[i]);
            if(A[i]!=B[i]&&index1==-1)
            {
                cnt++;
                index1 = i;
            }else if(A[i]!=B[i]&&index2==-1)
            {
                cnt++;
                index2 = i;
            }else if(A[i]!=B[i])    cnt++;
        }
        if(cnt>2)   return false;
        if(index2==-1&&index1==-1)
        {
            if(flag)    return true;
            else return false;
        }
        if(index1==-1||index2==-1)  return false;
        char tmp = A[index1];
        A[index1] = A[index2];
        A[index2] = tmp;
        return A==B;
    }
};
