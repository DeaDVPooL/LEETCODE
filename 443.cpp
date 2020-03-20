class Solution {
public:
    int compress(vector<char>& chars) {
        int cnt = 1,index = 0;
        chars.push_back('0');
        for(int i=0;i<chars.size()-1;i++)
        {
            if(chars[i]==chars[i+1])    cnt++;
            else
            {
                chars[index] = chars[i];
                if(cnt==1)   index++;
                else
                {
                    string s = to_string(cnt);
                    for(char c : s) chars[++index] = c;
                    index++;
                    cnt = 1;
                }
            }
        }
        return index;
    }
};
