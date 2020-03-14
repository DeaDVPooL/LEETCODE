class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int len = nums.size();
        if(len==0)  return 0;
        vector<int> d(len+1);
        d[1] = nums[0];
        int ans = 1;
        for(int i=1;i<len;i++)
        {
            if(nums[i]>d[ans])  d[++ans] = nums[i];
            else
            {
                int l = 1,r = ans,pos = 0;
                while(l<=r)
                {
                    int mid = l+(r-l)/2;
                    if(d[mid]<nums[i])
                    {
                        l = mid+1;
                        pos = mid;
                    }else r = mid-1;
                }
                d[pos+1] = nums[i];
            }
        }
        return ans;
    }
};
