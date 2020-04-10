class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int sumA = 0;
        int sumB = 0;
        for(int a:A)
            sumA += a;
        for(int b:B)
            sumB += b;
        unordered_map<int,int> map;
        for(int a:A)
            map[a + (sumB - sumA) / 2];//构造一个对应a需要的糖果棒大小的哈希表
        for(int b:B)//遍历B数组，看看B中元素在不在hash表中
            if(map.find(b) != map.end())
                return {(sumA - sumB) / 2 + b, b};
        return {};
    }
};
