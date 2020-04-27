class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,vector<int>> mymap;
        int count = 1;
        for(auto i = 0;i < arr.size();i++){
            mymap[arr[i]].push_back(i);
        }
        for(auto x:mymap){
            for(auto y:x.second){
                arr[y] = count;
            }
            count++;
        }
        return arr;
    }
};
