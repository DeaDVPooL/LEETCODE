class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int>M;
        for(int i=0;i<order.size();i++)
        {
            M[order[i]]=i;         //用哈希表记录下每个单词的顺序 
        }
        for(int i=0;i<words.size()-1;i++)
        {
            int j=i+1;
            int minsize=min(words[i].size(),words[j].size());  //得到前后两个之间较小的大小 
            int k=0;
            while(words[i][k]==words[j][k]&&k<=minsize-1) k++;  //若相同就一直加
            if(k==minsize)                                    //若访问超出数组，就进入判断
            {
                if(words[i].size()>words[j].size()) return false;
                else continue;
            }
            if(M[words[i][k]]>M[words[j][k]]) return false;
        }
        return true;
    }
};
