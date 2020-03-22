class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++)
        {
            int tmp = sqrt(nums[i]),cnt = 0;
            if(nums[i]%tmp==0&&nums[i]/tmp==tmp)  continue;
            for(int j=tmp;j>=1;j--)
            {
                if(nums[i]%j==0)    cnt++;
                if(cnt>2)   break;
            }
            if(cnt==2)
            {
                 for(int j=tmp;j>=1;j--)
                    if(nums[i]%j==0) ans+=(j+nums[i]/j);
            }
        }
        return ans;
    }
};
