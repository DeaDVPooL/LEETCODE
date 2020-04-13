class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i=0,j=0;
        while(i<name.size()&&j<typed.size())
        {
            if(name[i]==typed[j])
            {
                i++;
                j++;
            }else
            {
                if(j==0)    return false;
                while(typed[j]==typed[j-1])    j++;
                if(name[i]!=typed[j])   return false;
            }
        }
        if(i<name.size())   return false;
        return true;

    }
};
