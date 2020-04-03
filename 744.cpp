class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0, r = letters.size() - 1;
        if(target >= letters[r] || target < letters[l])  return letters[l]; //因为是循环数组，如果target不在数组范围内，直接返回数组第一个字符
        while(l + 1 < r){ // 二分法模板③，l始终在目标字符或者目标字符的左边，r 始终再目标字符的右边，当两者相遇跳出循环时，r刚好在目标字符位置的右边
            int mid = l + (r - l)/2;
            if(letters[mid] > target) r = mid;
            else    l = mid;
        }
        return letters[r];
    }
};
