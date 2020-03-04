static const auto io_sync_off = []()
{
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	std::cin.tie(nullptr);
	return nullptr;
}();
class Solution {
public:
    int lengthOfLastWord(string s) {
        int flag = 0,pos = s.size()-1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' '&&!flag)    continue;
            if(s[i]!=' '&&!flag)    {pos = i;flag = 1;}
            if(flag&&s[i]==' ') return pos-i;
            else if(flag&&i==0) return pos+1;
        }
        return 0;
    }
};
