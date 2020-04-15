class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        string ans = "";
        int maxtime = INT_MIN;
        sort(A.begin(),A.end());
        do
        {
            int hour = 10*A[0]+A[1];
            int minute = 10*A[2]+A[3];
            if(hour<24&&minute<60)  maxtime = max(maxtime,60*hour+minute);
        }while(next_permutation(A.begin(),A.end()));
        if(maxtime==INT_MIN)    return ans;
        ans+=(to_string(maxtime/60/10)+to_string(maxtime/60%10)+":"+to_string(maxtime%60/10)+to_string(maxtime%60%10));
        return ans;
    }
};
