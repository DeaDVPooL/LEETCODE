class Solution {
public:
    int c[260]={0};
    int strStr(string haystack, string needle) {
        int head = 0,lenh = haystack.size(),lenn = needle.size();
        if(lenn==0) return 0;
        for(int i=0;i<lenn;i++) c[needle[i]] = lenn-i;
        for(int i=0;head<lenh;)
        {
            if(haystack[head+i]==needle[i])
            {
                i++;
                if(i==lenn) return head;
            }else
            {
                if(head+lenn>=lenh)  return -1;
                if(c[haystack[head+lenn]]!=0)   head = head+c[haystack[head+lenn]];
                else head = head+lenn+1;
                i = 0;
            }
        }
        return -1;
    }
};
