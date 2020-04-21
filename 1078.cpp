class Solution {
public:
    vector<string> split(string text)
    {
        vector<string> ans;
        int index = 0;
        while(index<text.size()&&text[index]==' ') index++;
        string s = "";
        while(index<text.size())
        {
            if(text[index]==' ')   
            {
                ans.emplace_back(s);
                s = "";
                index++;
            }else
            {
                s+=text[index];
                index++;
                if(index==text.size()) ans.emplace_back(s);
            }
        }
        return ans;
    }
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans;
        vector<string> words = split(text);
        for(int i=0;i<words.size()-1;i++)
        {
            if(i+2<words.size()&&words[i]==first&&words[i+1]==second)   ans.emplace_back(words[i+2]); 
        }
        return ans;
    }
};
