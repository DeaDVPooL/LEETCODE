class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char,int> cnt;
        for(int i=0;i<moves.size();i++) cnt[moves[i]]++;
        if(cnt['D']==cnt['U']&&cnt['L']==cnt['R'])  return true;
        return false;
    }
};
