class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        transform(paragraph.begin(),paragraph.end(),paragraph.begin(),::tolower);
        string word="";
        map<string,int> m;
        for(int i=0;i<paragraph.size();i++){
            if(paragraph[i]>='a'&&paragraph[i]<='z'){
                word+=paragraph[i];
                continue;
            }
            if(word.size()>0){
                m[word]++;
                word="";
            }           
        }
        if(word.size()>0)
            m[word]++;
        map<string,int>::iterator it;
        for(int i=0;i<banned.size();i++)
            m[banned[i]]=INT_MIN;
        string ans_key="";
        int ans_value=0;
        for(it=m.begin();it!=m.end();it++){
            if(it->second>ans_value)
            {
                ans_value=it->second;
                ans_key=it->first;
            }
        }
        return ans_key;
    }
};
