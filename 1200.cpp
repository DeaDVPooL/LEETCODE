class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

        sort(arr.begin(),arr.end());
        int minsub=arr[1]-arr[0];
        for(int i=0;i<arr.size()-1;++i){
            if(arr[i+1]-arr[i]<minsub)
                minsub = arr[i+1]-arr[i];
        }

        vector<vector<int>> res;
        for(int i=0;i<arr.size()-1;++i){
            if(arr[i+1]-arr[i]==minsub){
                res.push_back({arr[i],arr[i+1]});
            }   
        }
        return res;
    }
};
