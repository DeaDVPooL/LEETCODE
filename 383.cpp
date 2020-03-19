class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> cntr;
        unordered_map<char,int> cntm;
        for(int i=0;i<ransomNote.size();i++)    cntr[ransomNote[i]]++;
        for(int i=0;i<magazine.size();i++)  cntm[magazine[i]]++;
        for(int i=0;i<ransomNote.size();i++)
            if(cntm[ransomNote[i]]<cntr[ransomNote[i]]) return false;
        return true;
    }
};
