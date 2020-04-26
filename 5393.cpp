class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int t = cardPoints.size()-k,sum = 0,minsum = 0,tmp = 0;
        for(int i=0;i<cardPoints.size();i++)
        {
            sum+=cardPoints[i];
            if(i<t) 
            {
                tmp+=cardPoints[i];
                minsum = tmp;
            }
            else
            {
                tmp = tmp-cardPoints[i-t]+cardPoints[i];
                minsum = min(minsum,tmp);
            }
        }
        return sum-minsum;
        
    }
};
