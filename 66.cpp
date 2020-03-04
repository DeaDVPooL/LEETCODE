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
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        digits[len-1]++;
        vector<int> ans;
        for(int i=len-1;i>=0;i--)
        {
            if(digits[i]==10)
            {
                if(i==0)
                {
                    digits[i]=0;
                    ans.push_back(1);
                }else
                {
                    digits[i]=0;
                    digits[i-1]++;
                }
            }else   break;
        }
        for(int i=0;i<len;i++)  ans.push_back(digits[i]);
        return ans;
    }
};
