class Solution {
public:
    unordered_set<char> vowel{'a', 'e', 'i', 'o', 'u'};
    string to_lower(string& word)
    {
        for(int i = 0; i < word.size(); i++)
        {
            word[i] = tolower(word[i]);
        }
        return word;
    }
    string exVowel(string& word)
    {
        for(int i = 0; i < word.size(); i++)
        {
            if(vowel.find(tolower(word[i])) == vowel.end()){
                word[i] = tolower(word[i]);
            }
            else word[i] = '#';
        }
        return word;
    }
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        vector<string> ans;
        int n = wordlist.size();
        unordered_set<string> w;
        unordered_map<string, int> c, v;
        for(int i = 0; i <n; i++)
        {
            w.insert(wordlist[i]);
            string tmp = wordlist[i];
            if(c.find(to_lower(tmp)) == c.end())c[tmp] = i;
            tmp = wordlist[i];
            if(v.find(exVowel(tmp)) == v.end())v[tmp] = i;
        }
        for(auto& q : queries){
            if(w.find(q) != w.end()){
                ans.push_back(q);
            }
            else{
                string tmp = q;
                if(c.find(to_lower(tmp)) != c.end())ans.push_back(wordlist[c[tmp]]);
                else {
                    tmp = q;
                    if(v.find(exVowel(tmp)) != v.end())ans.push_back(wordlist[v[tmp]]);
                    else ans.push_back("");
                }
            }
        }
        return ans;
    }
};
