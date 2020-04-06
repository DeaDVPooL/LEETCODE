class Solution {
public:
    string dict[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> s;
        for(int i=0;i<words.size();i++)
        {
            string tmp = "";
            for(int j=0;j<words[i].size();j++)  tmp+=dict[words[i][j]-'a'];
            s.insert(tmp);
        }
        return s.size();
    }
};
