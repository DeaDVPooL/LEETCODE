class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> ans{S};
        for(int i = 0; i < S.size(); i++){
            if(isalpha(S[i])){
                for(int j = ans.size() - 1; j >= 0; j--){
                    ans.push_back(ans[j]);
                    if(isupper(ans[j][i])) ans[j][i] = tolower(ans[j][i]);
                    else ans[j][i] = toupper(ans[j][i]);
                }
            }
        }
        return ans;
    }
};
