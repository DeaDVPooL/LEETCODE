class Solution {
public:
    int countBinarySubstrings(string s) {
        int ans=0;
        for(int i=0;i<s.size()-1;i++){//从前往后遍历
            if(s[i]!=s[i+1]){//发现0,1相邻,开始向两边扩张
                int left=i;
                int right=i+1;
                while(left>0&&right<s.size()-1){//当扩张到下一个0,1相邻和边界时跳出
                    if((s[left]!=s[left-1])||(s[right]!=s[right+1])){
                        break;
                    }
                    left--;
                    right++;
                }
                ans+=right-i;//此时符合条件的数量为长度的一半
                i=right-1;//直接跳到下一个
            }
        }
        return ans;
    }
};
