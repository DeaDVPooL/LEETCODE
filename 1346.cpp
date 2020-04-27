class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> s;
        int zero = 0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)   zero++;
            else if(arr[i]%2==0) s.insert(arr[i]/2);
            if(zero==2) return true;
        }
            
        for(int i=0;i<arr.size();i++)
            if(s.count(arr[i])) return true;
        return false;
    }
};
