class Solution {
public:
    string reverseOnlyLetters(string S) {
        int left=0;
        int len=S.size();
        int right=len-1;
        while(left<right){
            if(isalpha(S[left])&&isalpha(S[right])){
                char temp=S[left];
                S[left]=S[right];
                S[right]=temp;
                left++;
                right--;
            }
            else if(!isalpha(S[left])){
                left++;
            }
            else if(!isalpha(S[right])){
                right--;
            }
        }
        return S;
    }
};
